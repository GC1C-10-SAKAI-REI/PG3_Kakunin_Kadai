#include<stdio.h>
#include "Check.h"

int main()
{
	int index;
	const char* str[] = { "Matuzawa","810" };
	printf("0〜2まで数字を入れてください\n");

	scanf_s("%d", &index);

	Check *check = new Check(index,str[0]);
	printf("getの文字%c\n", check->Get(index));
	check->Set(index, 'e');
	printf("set後の文字列%s\n", check->_name);

	delete check;

	return 0;
}