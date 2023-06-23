#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//���ȎQ�ƍ\����
typedef struct cell
{
	char str[20];		//������
	int price;			//�l�i
	struct cell* prev;	//�O�̃Z��
	struct cell* next;	//���̃Z��
}CELL;

//�Z����ǉ�����֐�
void Create(CELL* currentCell, const char *buf, const int strSize,const int price);
//�Z���̈ꗗ�\��
void Index(CELL* endCell);
//�C�ӂ̈ʒu�̃A�h���X�܂ŒH��֐�
CELL* GetInsertListAddress(CELL* endcell, int iterator);

int main()
{
	const int strSize = 20;	//������
	char str[strSize];		//���i�̖��O
	int price;				// �V �̒l�i
	int iterator;			//�}������ӏ�
	CELL* insertCell;		//

	//�擪�ɓ��e����̃Z����錾(�擪�ł��邱�Ƃ𖾎������)
	CELL head;
	head.prev = nullptr;
	head.next = nullptr;

	while (true)
	{
		printf("���ԖڂɍD���Ȃ����i�ł����H\n");
		scanf_s("%d", &iterator);

		printf("�D���Ȃ����i����͂��Ă�������\n");
		scanf_s("%s", &str,strSize);

		printf("1�т̒l�i����͂��ĉ�����\n");
		scanf_s("%d", &price);

		//�}���������Z���̃A�h���X���擾
		insertCell = GetInsertListAddress(&head, iterator);
		//�Z���̒ǉ�
		Create(insertCell, str, strSize,price	);
		//���X�g�ꗗ�̕\��
		Index(&head);
	}

	return 0;
}

void Create(CELL* currentCell, const char *buf, const int strSize,const int price)
{
	//Step1�F�V�K�ɃZ����ǉ�
	CELL* newCell;
	newCell = (CELL*)malloc(sizeof(CELL));	//�V�K�Z���p�̃������m��
	
	strcpy_s(newCell->str, strSize, buf);	//�l����
	newCell->price = price;	
	newCell->prev = currentCell;			//�V�����Z���̑O�͌��݂̍Ō��
	newCell->next = currentCell->next;		//�V�����Z���̎���

	//Step2�F�w�肵���Z���̎��̃Z���́u�O�̃Z���̃|�C���^�v�ɐV�K�Z���̃A�h���X����
	if (currentCell->next)
	{
		CELL* nextCell = currentCell->next;
		nextCell->prev = newCell;
	}

	//Step3�F�w�肵���Z���́u���̃Z���̃|�C���^�v�ɐV�K�Z���̃A�h���X����
	currentCell->next = newCell;
}

void Index(CELL* endCell)
{
	//�\�̈�ԏ�\��
	printf("|rank|  �O�̃A�h���X  |���i�l�^|�l�i|    �A�h���X    |  ���̃A�h���X  |\n");
	printf("-----------------------------------------------------------------------\n");
	//�����N
	int rank = 1;
	while (endCell->next != nullptr)
	{
		endCell = endCell->next;
		printf("|%4d|", rank);			//�����N�\��
		printf("%p|", endCell->prev);	//�O�|�C���^�\��
		printf("%8s|", endCell->str);	//���i�l�^�\��
		printf("%4d|", endCell->price);	//�l�i�\��
		printf("%p|", endCell);			//�A�h���X�\��
		printf("%p|\n", endCell->next);	//���̃A�h���X�\��
		rank++;
	}
}

CELL* GetInsertListAddress(CELL* endcell, int iterator)
{
	for (int i = 0; i < iterator; i++)
	{
		if (endcell->next)
		{
			endcell = endcell->next;
		}
		else
		{
			break;
		}
	}
	return endcell;
}
