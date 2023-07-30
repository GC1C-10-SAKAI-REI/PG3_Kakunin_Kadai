#pragma once

#include <string>

class Pokemon
{
private://メンバ変数

	//親の名前
	std::string _name;
	//子供のポインタ
	Pokemon* _pokeJr;

public://メンバ関数

	//コンストラクタ
	Pokemon();
	//コンストラクタ
	Pokemon(const char* name);
	//コピーコンストラクタ
	Pokemon(const Pokemon& copyPoke);
	//デストラクタ
	~Pokemon();
	//const char型からstringへキャストする関数
	void SetName(const char* name);
	//親を出現させる関数
	void Encounter();
	//子供を産む関数
	void Birth();
	//親の名前取得
	std::string GetName() { return _name; }
	//子の名前取得
	std::string GetJrName() { return _pokeJr->GetName(); }
};