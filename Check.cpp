#include "Check.h"

Check::Check()
{
    this->age_ = 20;
}

Check::~Check()
{

}

int Check::Get(int index)
{
	checkIndex(index);
	return 0;
}

void Check::Set(int index, char val)
{

}

void Check::checkIndex(int index)
{

}

void Check::checkAge(int age)
{
	if (age >= 0 && age <= 30)
	{
		printf("年齢は対象内です\n");
	}
	else
	{
		printf("年齢が対象外です\n");
		system("pause");
	}
}