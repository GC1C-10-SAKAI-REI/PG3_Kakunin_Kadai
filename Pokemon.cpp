#include "Pokemon.h"

Pokemon::Pokemon(const char *name)
{
	this->name_ = name;
	printf("%s�����܂ꂽ!\n",name_);
}

Pokemon::~Pokemon()
{
	
}

Pokemon::Pokemon(const Pokemon & clone)
{
	printf("%s�͑o�q�������A������C���܂ꂽ�I\n", clone.name_);

	name_ = clone.name_;
}