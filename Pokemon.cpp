#include "Pokemon.h"

Pokemon::Pokemon(const char* name)
{
	this->_name = name;
	_cName = this->_name;
	printf("%s�������ꂽ�I\n", _name);
}

Pokemon::~Pokemon()
{
	delete _pokeJr;
}

Pokemon::Pokemon(const Pokemon &copyPoke)
{
	_name = copyPoke._name;
}

void Pokemon::Birth()
{
	/*strcat(, "Jr");
	_pokeJr = new Pokemon();*/
}