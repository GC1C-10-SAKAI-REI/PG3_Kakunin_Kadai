#include<stdio.h>
#include "Check.h"

int main()
{
	Check *index = new Check();

	const int nameLength = 20;
	char name[nameLength];
	int age = 0;

	while (true)
	{
		printf("名前を入力してください\n");
		scanf_s("%s", &name, nameLength);

		printf("年齢を入力してください\n");
		scanf_s("%d", &age);
	}	

	return 0;
}