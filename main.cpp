#include<stdio.h>

//配列の値を反転させる関数
void Reverse(int c[], int n);

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

	//反転
	Reverse(color, colorVal);

	printf("反転した配列の値の表示\n");
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