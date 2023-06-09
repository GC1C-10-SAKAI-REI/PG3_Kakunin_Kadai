#include<stdio.h>

int main()
{
	const int colorVal = 7;
	int color[colorVal] = { 0,1,2,3,4,5,6 };

	printf("全ての配列の値の表示\n");
	for (int i = 0; i < colorVal; i++)
	{
		printf("color[%d] = %d\n", i, color[i]);
	}
	printf("\n");

	printf("全ての配列のアドレスを表示(&使用)\n");
	for (int i = 0; i < colorVal; i++)
	{
		printf("color[%d] = %p\n", i, &color[i]);
	}
	printf("\n");

	printf("全ての配列のアドレスを表示(&不使用)\n");
	for (int i = 0; i < colorVal; i++)
	{
		printf("color[%d] = %p\n", i, color + i);
	}
	printf("\n");

	return 0;
}