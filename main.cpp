#include "Pokemon.h"

int main()
{
	//�R���X�g���N�^�Ăяo��
	Pokemon* pokemon = new Pokemon("�s�J�`���[");
	pokemon->Birth();
	//�R�s�[�R���X�g���N�^�Ăяo��
	Pokemon* clone = new Pokemon(*pokemon);
	clone->Birth();

	return 0;
}