#include "Pokemon.h"

Pokemon::Pokemon(const char* name)
{
	this->_name = name;
	printf("%sがあらわれた！\n", this->_name);
}

Pokemon& Pokemon::operator=(const Pokemon& obj)
{
	_name = obj._name;
	// TODO: return ステートメントをここに挿入します
	return *this;
}