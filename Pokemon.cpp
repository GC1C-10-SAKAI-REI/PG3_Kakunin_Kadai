#include "Pokemon.h"

Pokemon::Pokemon(const char* name)
{
	this->_name = name;
	printf("%s�������ꂽ�I\n", this->_name);
}

Pokemon::Pokemon(const Pokemon& obj)
{
	_name = obj._name;
	printf("%s�͂ӂ����������I\n", _name);
}

Pokemon::~Pokemon()
{

}