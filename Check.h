#pragma once
#include <stdio.h>
#include <iostream>

class Check
{
	//�����o�ϐ�
public:
	static const int nameLength_ = 20;
	static const int indexStorage = 5;
	char name_[indexStorage][nameLength_] = { { "noName" } };	//���O
	int age_;								//�N��

	//�����o�֐�
public:
	//�R���X�g���N�^
	Check();
	//�f�X�g���N�^
	~Check();
	//�w�肳�ꂽ�C���f�b�N�X�̔z��̗v�f��Ԃ�
	int Get(int index);
	//�w�肳�ꂽ�C���f�b�N�X�̔z��̗v�f��ύX����
	void Set(int index, char val);

private:
	//�w�肳�ꂽ�C���f�b�N�X���z��͈͓̔����`�F�b�N����
	void checkIndex(int index);
	//�w�肳�ꂽ�N�0�`30�͈͓̔����`�F�b�N����
	void checkAge(int age);
};