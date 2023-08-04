#include<stdio.h>
#include "Check.h"

int main()
{
	int index;
	const char* str[] = { "Matuzawa","810" };
	printf("0`2‚Ü‚Å”Žš‚ð“ü‚ê‚Ä‚­‚¾‚³‚¢\n");

	scanf_s("%d", &index);

	Check *check = new Check(index,str[0]);
	printf("get‚Ì•¶Žš%c\n", check->Get(index));
	check->Set(index, 'e');
	printf("setŒã‚Ì•¶Žš—ñ%s\n", check->_name);

	delete check;

	return 0;
}