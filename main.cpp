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
		printf("���O����͂��Ă�������\n");
		scanf_s("%s", &name, nameLength);

		printf("�N�����͂��Ă�������\n");
		scanf_s("%d", &age);
	}	

	return 0;
}