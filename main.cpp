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

	printf("宝箱を見つけた、0～2で一つ選ぼう\n");

	scanf_s("%d", &box);

	switch (box)
	{
	case TREASURE:
		printf("宝の山だ\n");
		break;

	case NONE:
		printf("からっぽだった");
		break;

	case MIMIC:
		printf("ミミックだ、かわi...");
		break;

	default:
		printf("急に天井が崩れ生き埋めになった");
		break;
	}

	return 0;
}