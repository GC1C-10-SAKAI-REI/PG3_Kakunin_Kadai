#include "Pokemon.h"

int main()
{
	Pokemon* pokemon = new Pokemon("ピカチュー");
	pokemon->Birth();
	Pokemon* clone = new Pokemon(*pokemon);
	clone->Birth();
}