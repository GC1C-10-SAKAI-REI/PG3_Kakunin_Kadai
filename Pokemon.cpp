#include "Pokemon.h"

Pokemon::Pokemon(const char *name)
{
	this->name_ = name;
	printf("%sがうまれた!\n",name_);
}

Pokemon::~Pokemon()
{
	
}

Pokemon::Pokemon(const Pokemon & clone)
{
	printf("%sは双子だった、もう一匹うまれた！\n", clone.name_);

	name_ = clone.name_;
}