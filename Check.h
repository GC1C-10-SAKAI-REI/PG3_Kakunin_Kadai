#pragma once
#include <stdio.h>
#include <iostream>

class Check
{
	//�����o�ϐ�
public:
	char _name[20];
	int _age;		//�N��

	//�����o�֐�
public:
	//�R���X�g���N�^
	Check(int index,const char* str);
	//�f�X�g���N�^
	~Check();
	//�w�肳�ꂽ�C���f�b�N�X�̔z��̗v�f��Ԃ�
	char Get(int index);
	//�w�肳�ꂽ�C���f�b�N�X�̔z��̗v�f��ύX����
	void Set(int index, char val);

private:
	//�w�肳�ꂽ�C���f�b�N�X���z��͈͓̔����`�F�b�N����
	void checkIndex(int index);
	//�w�肳�ꂽ�N�0�`30�͈͓̔����`�F�b�N����
	void checkAge(int age);
};