#include <stdio.h>
//P44のコード
int main(void)
{
	int i, a, b, c;
	int data[] = { 5,2,6,0,5,2,9 };
	int weight[] = { 1,3,1,3,1,3,1 };

	a = 1;
	b = 1;
	c = 3;
	for (i = 0; i < 7; i++)
	{
		switch (i)// i:0～6
		{// 1 2 3 5 6
			case 2:
			case 3:
			case 6:
				a *= 2;//i:2 a:4 i:3 a:8 i:6 a:18
				break;
			case 1:
			case 5:
				a++;// i:1 a:2 i:5 a:9
				break;
		}
		//             0 1 2 3 4 5 6
//		int data[] = { 5,2,6,0,5,2,9 };
//	  int weight[] = { 1,3,1,3,1,3,1 };
		// b:1 c:3 i:0~6
		switch (data[i] * weight[i])
		{
			case 5:
				b += weight[i] * c;//c:6
				//i:0 b:4 　//i:4 b:4
				break;
			case 6:
				b -= 3;// i:1 b:1 　i:2 b:-2
				//i:5 b:1
				break;
			default:
				c += weight[i];//i:3 c:6 　i:6 c:7
				break;
		}
	}

	printf("22:%d\n", a); //22 a:18 エ
	printf("23:%d\n", b); //23 b:1  ウ
	printf("24:%d\n", c); //24 c:7　ウ

	return 0;
}