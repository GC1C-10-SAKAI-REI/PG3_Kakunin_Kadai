#include "Pokemon.h"

int main()
{
	//�R���X�g���N�^
	Pokemon* pokemon = new Pokemon("�L����");
	//�R�s�R��
	Pokemon* clone = new Pokemon(*pokemon);

	return 0;
}