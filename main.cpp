#include<stdio.h>
#include<stdlib.h>

//���ȎQ�ƍ\����
typedef struct cell
{
	int val;			//�l
	struct cell* prev;	//�O�̃Z��
	struct cell* next;	//���̃Z��
}CELL;

//�l��ǉ�����֐�
void Create(CELL* currentCell, int val);
//�Z���̈ꗗ�\��
void Index(CELL* endCell);
//�C�ӂ̈ʒu�̃A�h���X�܂ŒH��֐�
CELL* GetInsertListAddress(CELL* endcell, int iterator);

int main()
{
	int iterator;		//�}������ӏ�
	int inputVal;		//�}������l
	CELL* insertCell;	//

	//�擪�ɓ��e����̃Z����錾(�擪�ł��邱�Ƃ𖾎������)
	CELL head;
	head.prev = nullptr;
	head.next = nullptr;

	while (true)
	{
		printf("���Ԗڂ̃Z���̌��ɑ}�����܂����H\n");
		scanf_s("%d", &iterator);

		printf("�}������l����͂��Ă�������\n");
		scanf_s("%d", &inputVal);

		//�}���������Z���̃A�h���X���擾
		insertCell = GetInsertListAddress(&head, iterator);
		//�Z���̒ǉ�
		Create(insertCell, inputVal);
		//���X�g�ꗗ�̕\��
		Index(&head);
	}

	return 0;
}

void Create(CELL* currentCell, int val)
{
	//Step1�F�V�K�ɃZ����ǉ�
	CELL* newCell;
	newCell = (CELL*)malloc(sizeof(CELL));	//�V�K�Z���p�̃������m��
	newCell->val = val;						//�l����
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
	int no = 1;
	while (endCell->next != nullptr)
	{
		endCell = endCell->next;
		printf("%d", no);
		printf("%p", endCell->prev);
		printf("%5d", endCell->val);//5���܂ŉE����
		printf("(%p)", endCell);
		printf("%p\n", endCell->next);
		no++;
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
