#pragma once
#include <stdio.h>

class Pokemon
{
public:
	//�R���X�g���N�^
	Pokemon(const char *name);
	//�f�X�g���N�^
	~Pokemon();
	//�R�s�[�R���X�g���N�^
	Pokemon(const Pokemon &clone);

private:
	const char *name_ = {};
};