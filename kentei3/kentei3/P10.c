#include <stdio.h>
#define MAX_SIZE 100

int main()
{
	int codes[MAX_SIZE], code;
	int counts[MAX_SIZE], count;
	int size, i, sum;

	//�f�[�^����͂���
	size = 0;
	// �ő�100���̃f�[�^����͂��郋�[�v����
	while (size < MAX_SIZE)
	{
		//���i�R�[�h�͏����œ��͂���
		scanf_s("%d %d", &code,&count);
		// �R�[�h��9999�����͂��ꂽ�ꍇ
		if (code == 9999)
			break;//33 �f�[�^���͂𒆒f������

		//���͂��ꂽ�f�[�^��z��ɑ��
		codes[size] = code;
		counts[size] = count;

		size++;//34
	}


	//���i�R�[�h���Ƃ̔���グ���̍��v�l���o�͂���

	//�����菇3�@�e�z��̐擪�v�f��������
	code = codes[0]; //code:1001
	sum = counts[0]; //sum:3

	// ���� codes[1]:1001 �Ƃ�����

	for (i = 1; i < size; i++)
	{
		// ���݂̃R�[�hcodes[i]�ƕۑ��R�[�hcode���s��v�̏ꍇ
		if (codes[i] != code)//35
		{
			// �ۑ������R�[�h�ƍ��v�����o�͂���
			printf("%04d : %5d\n",code, sum);

			//���݂̃R�[�h�ƌ��i�z����̃f�[�^�j��ϐ��ɑ��
			code = codes[i];//36
			sum = counts[i];
		}
		else 
		{
			// ���݂̔���グ�������v�ɉ�����
			sum += counts[i];//37
		}
	}
	//���o�́i9999�j�̃f�[�^���o�͂���
	printf("%04d : %5d\n", code, sum);

	return 0;
}