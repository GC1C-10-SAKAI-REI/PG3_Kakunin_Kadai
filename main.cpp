#include "Pokemon.h"
#include "Clone.h"

int main()
{
	//親生成
	Pokemon *pokemon = new Pokemon("キモリ");
	//子供生成
	pokemon->Birth();
}