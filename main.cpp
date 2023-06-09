#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//���ȎQ�ƍ\����
typedef struct CELL
{
	char str[20];
	CELL* next;
}CELL;

//�Ō���ɃZ����ǉ�����֐�
void Create(CELL* endCell, const char* buf, const int strSize);
//���X�g�̈ꗗ��\������֐�
void Index(CELL* endCell);

int main()
{
	const int strSize = 20;
	char str[strSize];
	//�擪�ɓ��e����̃Z����錾
	CELL head;
	head.next = nullptr;

	while (true)
	{
		printf("�D���Ȃ����i����͂��Ă�������\n_\n");
		scanf_s("%s", &str, 20);
		//�Ō���ɃZ����ǉ�
		Create(&head, str, strSize);
		//���X�g�ꗗ��\��
		Index(&head);
	}

	return 0;
}

void Create(CELL* endCell, const char* buf, const int strSize)
{
	/*Step1.�V�K�ɃZ����ǉ�*/
	CELL* newCell;

	newCell = (CELL*)malloc(sizeof(CELL));

	strcpy_s(newCell->str, strSize, buf);
	newCell->next = nullptr;

	/*Step2.�ǉ�����O�̍Ō��������*/
	while (endCell->next != NULL)
	{
		endCell = endCell->next;
	}

	/*Step3.�ǉ�����O�̍Ō���ɐV�K�Z���̃|�C���^����*/
	endCell->next = newCell;
}

void Index(CELL* endCell)
{
	printf("[");
	while (endCell->next != NULL)
	{
		//next�ɉ����l�������Ă���ԏo��
		endCell = endCell->next;
		printf("%s", endCell->str);
		if (endCell->next != NULL)
		{
			printf(",");
		}
	}
	printf("]\n");
}