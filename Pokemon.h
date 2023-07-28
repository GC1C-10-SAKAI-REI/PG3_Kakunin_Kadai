#pragma once
#include<stdio.h>

class Pokemon
{
private:
	const char* _name;

public:
	//コンストラクタ
	Pokemon(const char *name);
	//代入演算子のオーバーロード
	Pokemon &operator=(const Pokemon &obj);
	//
	const char* GetName() { return _name; }
};