#include "Pokemon.h"

int main()
{
	Pokemon pokemon1 = Pokemon("�q�R�U��");
	Pokemon pokemon2 = Pokemon("���^����");
	pokemon2 = pokemon1;
	printf("%s�������ꂽ�I\n",pokemon1.GetName());
	printf("%s�������ꂽ�I\n",pokemon1.GetName());

	return 0;
}