#include "Pokemon.h"

Pokemon::Pokemon(const char* name)
{
	this->_name = name;
	printf("%s�������ꂽ�I\n", this->_name);
}

Pokemon& Pokemon::operator=(const Pokemon& obj)
{
	_name = obj._name;
	// TODO: return �X�e�[�g�����g�������ɑ}�����܂�
	return *this;
}