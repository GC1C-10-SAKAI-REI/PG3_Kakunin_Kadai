#pragma once

#include <string>

class Pokemon
{
private:
	Pokemon* _pokeJr;
	std::string _name;

public:
	//コンストラクタ
	Pokemon();
	//コンストラクタ
	Pokemon(const char* name);
	//コピーコンストラクタ
	Pokemon(const Pokemon& copyPoke);
	//デストラクタ
	~Pokemon();
	//
	void SetName(const char* name);
	//
	void Encounter();
	//子供を産む関数
	void Birth();
	//
	std::string GetName() { return _name; }
	//
	std::string GetJrName() { return _pokeJr->GetName(); }
};