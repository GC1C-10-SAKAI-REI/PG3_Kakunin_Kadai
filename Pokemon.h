#pragma once

#include <string>

class Pokemon
{
private:
	Pokemon* _pokeJr;
	std::string _name;

public:
	//�R���X�g���N�^
	Pokemon(const char *name);
	//������Z�q�̃I�[�o�[���[�h
	Pokemon &operator=(const Pokemon &obj);
	//�Q�b�^�[
	const char* GetName() { return _name; }
};