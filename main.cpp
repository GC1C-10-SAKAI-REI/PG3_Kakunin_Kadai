#include "Pokemon.h"

int main()
{
	Pokemon* pokemon = new Pokemon("�s�J�`���[");
	pokemon->Birth();
	Pokemon* clone = new Pokemon(*pokemon);
	clone->Birth();
}