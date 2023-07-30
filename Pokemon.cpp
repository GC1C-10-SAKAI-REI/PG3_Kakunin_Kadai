#include "Pokemon.h"
#include <iostream>

Pokemon::Pokemon()
{
	SetName("");
}

Pokemon::Pokemon(const char* name)
{
	SetName(name);
	Encounter();
}

Pokemon::Pokemon(const Pokemon& copyPoke)
{
	printf("\nコピーします\n\n");
	GetName();
	SetName(copyPoke._name.c_str());
	Encounter();
}

Pokemon::~Pokemon()
{
	if (_pokeJr != nullptr)
	{
		delete _pokeJr;
	}
}

void Pokemon::SetName(const char* name)
{
	this->_name = std::string(name);
}

void Pokemon::Encounter()
{
	std::cout << _name << "があらわれた！" << std::endl;
}

void Pokemon::Birth()
{
	std::string name = this->GetName() + ".Jr";
	_pokeJr = new Pokemon(name.c_str());
}