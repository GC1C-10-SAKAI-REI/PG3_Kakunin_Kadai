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
		printf("”N—î‚Í‘ÎÛ“à‚Å‚·\n");
	}
	else
	{
		printf("”N—î‚ª‘ÎÛŠO‚Å‚·\n");
	}
}