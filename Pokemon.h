#pragma once

#include <string>

class Pokemon
{
private://�����o�ϐ�

	//�e�̖��O
	std::string _name;
	//�q���̃|�C���^
	Pokemon* _pokeJr;

public://�����o�֐�

	//�R���X�g���N�^
	Pokemon();
	//�R���X�g���N�^
	Pokemon(const char* name);
	//�R�s�[�R���X�g���N�^
	Pokemon(const Pokemon& copyPoke);
	//�f�X�g���N�^
	~Pokemon();
	//const char�^����string�փL���X�g����֐�
	void SetName(const char* name);
	//�e���o��������֐�
	void Encounter();
	//�q�����Y�ފ֐�
	void Birth();
	//�e�̖��O�擾
	std::string GetName() { return _name; }
	//�q�̖��O�擾
	std::string GetJrName() { return _pokeJr->GetName(); }
};