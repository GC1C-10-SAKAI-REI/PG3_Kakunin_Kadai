#include "Pokemon.h"

Pokemon::Pokemon(const char* name)
{
	this->_name = name;
	printf("%sÇ™Ç†ÇÁÇÌÇÍÇΩÅI\n", this->_name);
}

Pokemon::Pokemon(const Pokemon& obj)
{
	_name = obj._name;
	printf("%sÇÕÇ”ÇΩÇ≤ÇæÇ¡ÇΩÅI\n", _name);
}

Pokemon::~Pokemon()
{

}