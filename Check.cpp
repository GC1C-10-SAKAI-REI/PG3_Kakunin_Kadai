#include "Check.h"

Check::Check(int index, const char* str)
{
	strcpy_s(this->_name, str);
    this->_age = index;
}

Check::~Check()
{

}

char Check::Get(int index)
{
	checkIndex(index);
	return _name[index];
}

void Check::Set(int index, char val)
{
	checkIndex(index);
	this->_name[index] = val;
}

void Check::checkIndex(int index)
{
	if (index <= 0 && index >= 30)
	{
		printf("�C���f�b�N�X���ΏۊO�ł�\n");
		exit(1);
	}
}

void Check::checkAge(int age)
{
	if (age <= 0 && age >= 30)
	{
		printf("�N��ΏۊO�ł�\n");
		exit(1);
	}
}