#include<stdio.h>

//�z��̒l�𔽓]������֐�
void Reverse(int c[], int n);

int main()
{
	const int colorVal = 7;
	int color[colorVal] = { 0,1,2,3,4,5,6 };

	printf("�S�Ă̔z��̒l�̕\��\n");
	for (int i = 0; i < colorVal; i++)
	{
		printf("color[%d] = %d\n", i, color[i]);
	}
	printf("\n");

	//���]
	Reverse(color, colorVal);

	printf("���]�����z��̒l�̕\��\n");
	for (int i = 0; i < colorVal; i++)
	{
		printf("color[%d] = %d\n", i, color[i]);
	}
	printf("\n");

	return 0;
}

void Reverse(int c[], int n)
{
	for (int i = 0; i < n / 2; i++)
	{
		int copy = c[i];
		c[i] = c[n - i - 1];
		c[n - i - 1] = copy;;
	}
}