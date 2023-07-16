#pragma once
#include <stdio.h>

class Pokemon
{
public:
	//コンストラクタ
	Pokemon(const char *name);
	//デストラクタ
	~Pokemon();
	//コピーコンストラクタ
	Pokemon(const Pokemon &clone);

private:
	const char *name_ = {};
};