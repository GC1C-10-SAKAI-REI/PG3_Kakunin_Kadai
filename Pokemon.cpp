#include "Pokemon.h"

Pokemon::Pokemon(const char* name)
{
	this->_name = name;
	printf("%sがあらわれた！\n", this->_name);
}

Pokemon::Pokemon(const Pokemon& obj)
{
	_name = obj._name;
	printf("%sはふたごだった！\n", _name);
}

Pokemon::~Pokemon()
{

}