#include <stdio.h>
#define MAX_SIZE 100

int main()
{
	int codes[MAX_SIZE], code;
	int counts[MAX_SIZE], count;
	int size, i, sum;

	//データを入力する
	size = 0;
	// 最大100件のデータを入力するループ条件
	while (size < MAX_SIZE)
	{
		//商品コードは昇順で入力する
		scanf_s("%d %d", &code,&count);
		// コードに9999が入力された場合
		if (code == 9999)
			break;//33 データ入力を中断させる

		//入力されたデータを配列に代入
		codes[size] = code;
		counts[size] = count;

		size++;//34
	}


	//商品コードごとの売り上げ個数の合計値を出力する

	//処理手順3　各配列の先頭要素を代入する
	code = codes[0]; //code:1001
	sum = counts[0]; //sum:3

	// 仮に codes[1]:1001 としたら

	for (i = 1; i < size; i++)
	{
		// 現在のコードcodes[i]と保存コードcodeが不一致の場合
		if (codes[i] != code)//35
		{
			// 保存したコードと合計個数を出力する
			printf("%04d : %5d\n",code, sum);

			//現在のコードと個数（配列内のデータ）を変数に代入
			code = codes[i];//36
			sum = counts[i];
		}
		else 
		{
			// 現在の売り上げ個数を合計に加える
			sum += counts[i];//37
		}
	}
	//未出力（9999）のデータを出力する
	printf("%04d : %5d\n", code, sum);

	return 0;
}