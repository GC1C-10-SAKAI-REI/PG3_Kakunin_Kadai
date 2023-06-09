#include<stdio.h>

int main()
{
	const int wordVal = 6;
	const char* str[wordVal] = { "creater's","music" ,"tecnology" ,"it","design" ,"sports & health" };

	for (int i = 0; i < wordVal; i++)
	{
		printf("%s\n", str[i]);
	}

	return 0;
}