#include "Pokemon.h"

int main()
{
	Pokemon *pokemon1 = new Pokemon("�L����");
	Pokemon* pokemon2 = new Pokemon(*pokemon1);

	return 0;
}