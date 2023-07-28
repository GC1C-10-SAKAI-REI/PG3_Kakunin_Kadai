#include "Pokemon.h"

int main()
{
	//コンストラクタ
	Pokemon* pokemon = new Pokemon("キモリ");
	//コピコン
	Pokemon* clone = new Pokemon(*pokemon);

	return 0;
}