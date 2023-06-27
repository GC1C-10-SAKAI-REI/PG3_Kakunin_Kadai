#include<stdio.h>
#include "Check.h"

int main()
{
	Check *index = new Check();

	const int nameLength = 40;
	char name[nameLength];
	int age = 0;

	printf("–¼‘O‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf_s("%s", &name, nameLength);

	printf("”N—î‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf_s("%d", age);

	return 0;
}