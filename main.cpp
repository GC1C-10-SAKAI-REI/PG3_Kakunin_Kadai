#include<stdio.h>

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

	printf("�S�Ă̔z��̃A�h���X��\��(&�g�p)\n");
	for (int i = 0; i < colorVal; i++)
	{
		printf("color[%d] = %p\n", i, &color[i]);
	}
	printf("\n");

	printf("�S�Ă̔z��̃A�h���X��\��(&�s�g�p)\n");
	for (int i = 0; i < colorVal; i++)
	{
		printf("color[%d] = %p\n", i, color + i);
	}
	printf("\n");

	return 0;
}