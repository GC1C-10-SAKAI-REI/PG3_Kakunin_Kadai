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
	//�R���X�g���N�^
	Pokemon(const char* name);
	//�R�s�[�R���X�g���N�^
	Pokemon(const Pokemon& copyPoke);
	//�f�X�g���N�^
	~Pokemon();
	//�q�����Y�ފ֐�
	void Birth();
	const char* GetName() { return _name; }
};