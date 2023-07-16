#include "Pokemon.h"

Pokemon::Pokemon(const char *name)
{
	this->name_ = name;
	printf("%s‚ª‚¤‚Ü‚ê‚½!\n",name_);
}

Pokemon::~Pokemon()
{
	
}

Pokemon::Pokemon(const Pokemon & clone)
{
	printf("%s‚Í‘oq‚¾‚Á‚½A‚à‚¤ˆê•C‚¤‚Ü‚ê‚½I\n", clone.name_);

	name_ = clone.name_;
}