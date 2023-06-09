#include<stdio.h>

int main()
{
	const int colorVal = 7;
	int color[colorVal] = { 8,1,5,4,7,2,6 };
	//検索する数字
	int searchNum = 0;

	//配列の表示
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

	//数字選択
	printf("[]内の数字を選んで下さい\n");
	scanf_s("%d", &searchNum);

	//線形探索
	for (int i = 0; i < colorVal; i++)
	{
		if (searchNum == color[i])
		{
			printf("入力した数字は[]内の%d番目にあります", i);
			break;
		}
	}

	return 0;
}