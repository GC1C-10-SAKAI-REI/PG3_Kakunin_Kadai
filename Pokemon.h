#pragma once

#include <string>

class Pokemon
{
private:
	Pokemon* _pokeJr;
	std::string _name;

public:
	//コンストラクタ
	Pokemon(const char *name);
	//代入演算子のオーバーロード
	Pokemon &operator=(const Pokemon &obj);
	//ゲッター
	const char* GetName() { return _name; }
};