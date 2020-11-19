#include <stdio.h>
//ブレークポイントの使い方復習
// F9 ブレークポイント(赤〇)の設置、取り消し
// 上部のデバッグ項目からも設定可能

// 動作と確認のやりかた
// 必ず F5 でプログラムを実行する。
// 停止させる場合は shift+F5 

// 停止させた場所から一行処理する 
// F10 ステップオーバー


int main(void)
{
	char str[] = "Baseball", ch;
	int d[] = { 3,7,1,5,4,3,7 };

	int a, b;

	if (str[1] == str[5])
		a = d[1];
	else
		a = d[5];
	printf("14:%d\n",a); //14　オ：7


	//char str[] = "Baseball", ch;
	//int d[] = { 3,7,1,5,4,3,7 };

	a = d[3]; //a:5
	if (a > 6)
		b = d[a - 6];
	else
		b = d[a];//a:5 b:3
	ch = str[b];//ch:e

	printf("15:%d\n", b); //15　イ：3
	printf("16:%c\n", ch); //16　ウ：e

	//char str[] = "Baseball", ch;
	//int d[] = { 3,7,1,5,4,3,7 };

	a = 6;
	if (d[a] < 5)// 7 < 5 ×
		a--;
	if (d[a] > 3)// 7 > 3 〇
		a -= 2; //a:4
	if (d[a] > 1)// 4 > 1 〇
		a -= 3; //a:1
	printf("17:%d\n", a); //17　ア：1



	//char str[] = "Baseball", ch;
	//int d[] = { 3,7,1,5,4,3,7 };

	a = 6;
	if (d[a] < 5) // 7 < 5 ×
		a--;
	else if (d[a] > 3)// 7 > 3 〇
		a -= 2; //a:4
	else if (d[a] > 1)
		a -= 3;
	printf("18:%d\n", a); //18　エ：4

	//char str[] = "Baseball", ch;
	//int d[] = { 3,7,1,5,4,3,7 };

	a = 0;
	if (++d[0] > 3)// 4 > 3 〇
		a++;//a:1
	if (d[3]++ > 5)// 5 > 5 ×
		a++;
	printf("19:%d\n", a); //19　ア：1
	printf("20:%d\n", d[0]); //20　ウ：4
	printf("21:%d\n", d[3]); //21　オ：6


	return 0;

}
