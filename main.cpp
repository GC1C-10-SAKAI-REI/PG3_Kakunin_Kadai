#include "Pokemon.h"

int main()
{
	Pokemon pokemon1 = Pokemon("ヒコザル");
	Pokemon pokemon2 = Pokemon("メタモン");
	pokemon2 = pokemon1;
	printf("%sがあらわれた！\n",pokemon1.GetName());
	printf("%sがあらわれた！\n",pokemon1.GetName());

	return 0;
}