#pragma once
#include<stdio.h>

class Pokemon
{
private:
	const char* _name;

public:
	//�R���X�g���N�^
	Pokemon(const char *name);
	//������Z�q�̃I�[�o�[���[�h
	Pokemon &operator=(const Pokemon &obj);
	//
	const char* GetName() { return _name; }
};