#include <stdio.h>

int main()
{
	char str[] = "--PEN-N***I--NK-";
	char buf[80], ch;
	int state = 0, i = 0, j = 0;
	int s = 0, t = 0;

	while (str[i] != '\0')
	{
		ch = str[i];
		switch (state)
		{
			case 0:
				s++;
				if (ch != '-')
				{
					buf[j++] = ch;
					state = 1;
				}
				break;
			case 1:
				switch (ch)
				{
					case '*':
						state = 2;
						break;
					case '-':
						state = 0;
						break;
					default:
						buf[j++] = ch;
						break;
				}

		default:
			break;
		}
	}
	return 0;
}