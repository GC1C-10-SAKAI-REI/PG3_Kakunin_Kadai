#include<stdio.h>

int main()
{
	const int colorVal = 7;
	int color[colorVal] = { 8,1,5,4,7,2,6 };
	//�������鐔��
	int searchNum = 0;

	//�z��̕\��
	printf("[");
	for (int i = 0; i < colorVal; i++)
	{
		if (i < colorVal - 1)
		{
			printf("%d,", color[i]);
		}
		else if (i >= colorVal - 1)
		{
			printf("%d", color[i]);
		}
	}
	printf("]\n\n");

	//�����I��
	printf("[]���̐�����I��ŉ�����\n");
	scanf_s("%d", &searchNum);

	//���`�T��
	for (int i = 0; i < colorVal; i++)
	{
		if (searchNum == color[i])
		{
			printf("���͂���������[]����%d�Ԗڂɂ���܂�", i);
			break;
		}
	}

	return 0;
}