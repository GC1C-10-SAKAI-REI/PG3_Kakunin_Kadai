#include<stdio.h>
#include "Check.h"

int main()
{
	int index;
	const char* str[] = { "Matuzawa","810" };
	printf("1�`2�܂Ő��������Ă�������\n");

	scanf_s("%d", &index);

	Check *check = new Check(index,str[0]);
	printf("get�̕���%c\n", check->Get(index));
	check->Set(index, 'e');
	printf("set��̕�����%s\n", check->_name);

	delete check;

	return 0;
}