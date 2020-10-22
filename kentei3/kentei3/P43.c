#include <stdio.h>

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
		switch (i)
		{
			case 2:
			case 3:
			case 6:
				a *= 2;
				break;
			case 1:
			case 5:
				a++;
				break;

		}

		switch (data[i] * weight[i])
		{
			case 5:
				b += weight[i] * c;
				break;
			case 6:
				b -= 3;
				break;
			default:
				c += weight[i];
				break;
		}
	}

	printf("22:%d\n", a); //22
	printf("23:%d\n", b); //23
	printf("24:%d\n", c); //24

	return 0;
}