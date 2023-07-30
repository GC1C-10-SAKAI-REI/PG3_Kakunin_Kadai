#pragma once

#include <string>

class Pokemon
{
private:
	Pokemon* _pokeJr;
	std::string _name;

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
	std::string GetJrName() { return _pokeJr->GetName(); }
};