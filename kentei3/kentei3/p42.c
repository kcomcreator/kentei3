#include <stdio.h>
//�u���[�N�|�C���g�̎g�������K
// F9 �u���[�N�|�C���g(�ԁZ)�̐ݒu�A������
// �㕔�̃f�o�b�O���ڂ�����ݒ�\

// ����Ɗm�F�̂�肩��
// �K�� F5 �Ńv���O���������s����B
// ��~������ꍇ�� shift+F5 

// ��~�������ꏊ�����s�������� 
// F10 �X�e�b�v�I�[�o�[


int main(void)
{
	char str[] = "Baseball", ch;
	int d[] = { 3,7,1,5,4,3,7 };

	int a, b;

	if (str[1] == str[5])
		a = d[1];
	else
		a = d[5];
	printf("14:%d\n",a); //14�@�I�F7


	//char str[] = "Baseball", ch;
	//int d[] = { 3,7,1,5,4,3,7 };

	a = d[3]; //a:5
	if (a > 6)
		b = d[a - 6];
	else
		b = d[a];//a:5 b:3
	ch = str[b];//ch:e

	printf("15:%d\n", b); //15�@�C�F3
	printf("16:%c\n", ch); //16�@�E�Fe

	//char str[] = "Baseball", ch;
	//int d[] = { 3,7,1,5,4,3,7 };

	a = 6;
	if (d[a] < 5)// 7 < 5 �~
		a--;
	if (d[a] > 3)// 7 > 3 �Z
		a -= 2; //a:4
	if (d[a] > 1)// 4 > 1 �Z
		a -= 3; //a:1
	printf("17:%d\n", a); //17�@�A�F1



	//char str[] = "Baseball", ch;
	//int d[] = { 3,7,1,5,4,3,7 };

	a = 6;
	if (d[a] < 5) // 7 < 5 �~
		a--;
	else if (d[a] > 3)// 7 > 3 �Z
		a -= 2; //a:4
	else if (d[a] > 1)
		a -= 3;
	printf("18:%d\n", a); //18�@�G�F4

	//char str[] = "Baseball", ch;
	//int d[] = { 3,7,1,5,4,3,7 };

	a = 0;
	if (++d[0] > 3)// 4 > 3 �Z
		a++;//a:1
	if (d[3]++ > 5)// 5 > 5 �~
		a++;
	printf("19:%d\n", a); //19�@�A�F1
	printf("20:%d\n", d[0]); //20�@�E�F4
	printf("21:%d\n", d[3]); //21�@�I�F6


	return 0;

}
