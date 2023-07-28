#pragma once
#include <string.h>
#include <string>

using namespace std;

class Pokemon
{
private:
	string _name;
	Pokemon *_pokeJr;

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
	std::string GetJrName()
	{
		if (_pokeJr == nullptr)
		{
			return "まだ生まれてない";
		}
		return _pokeJr->GetName();
	}
};