#include<stdio.h>

enum Box
{
	TREASURE,
	NONE,
	MIMIC
};

int main()
{
	Box box = NONE;

	printf("�󔠂��������A0�`2�ň�I�ڂ�\n");

	scanf_s("%d", &box);

	switch (box)
	{
	case TREASURE:
		printf("��̎R��\n");
		break;

	case NONE:
		printf("������ۂ�����");
		break;

	case MIMIC:
		printf("�~�~�b�N���A����i...");
		break;

	default:
		printf("�}�ɓV�䂪���ꐶ�����߂ɂȂ���");
		break;
	}

	return 0;
}