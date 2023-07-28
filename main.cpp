#include "Pokemon.h"

int main()
{
	//コンストラクタ呼び出し
	Pokemon* pokemon = new Pokemon("ピカチュー");
	pokemon->Birth();
	//コピーコンストラクタ呼び出し
	Pokemon* clone = new Pokemon(*pokemon);
	clone->Birth();

	return 0;
}