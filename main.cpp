#include "Pokemon.h"

int main()
{
	Pokemon *pokemon1 = new Pokemon("ÉLÉÇÉä");
	Pokemon* pokemon2 = new Pokemon(*pokemon1);

	return 0;
}