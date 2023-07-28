#pragma once
#include <stdio.h>
#include <string.h>

class Pokemon
{
private:
	const char *_name;
	const char *_cName = nullptr;
	Pokemon *_pokeJr = nullptr;

public:
	//コンストラクタ
	Pokemon(const char* name);
	//コピーコンストラクタ
	Pokemon(const Pokemon& copyPoke);
	//デストラクタ
	~Pokemon();
	//子供を産む関数
	void Birth();
	const char* GetName() { return _name; }
};