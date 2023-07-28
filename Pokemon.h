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
	//�R���X�g���N�^
	Pokemon();
	//�R���X�g���N�^
	Pokemon(const char* name);
	//�R�s�[�R���X�g���N�^
	Pokemon(const Pokemon& copyPoke);
	//�f�X�g���N�^
	~Pokemon();
	//
	void SetName(const char* name);
	//
	void Encounter();
	//�q�����Y�ފ֐�
	void Birth();
	//
	std::string GetName() { return _name; }
	//
	std::string GetJrName()
	{
		if (_pokeJr == nullptr)
		{
			return "�܂����܂�ĂȂ�";
		}
		return _pokeJr->GetName();
	}
};