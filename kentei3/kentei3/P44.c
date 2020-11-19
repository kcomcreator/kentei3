#include <stdio.h>

int main()
{//               0123456789101112131415
	char str[] = "--PE-N***I--NK-";
	char buf[80], ch;
	int state = 0, i = 0, j = 0;
	int s = 0, t = 0;

	// 文字列を終端まで回す
	// 文字列の文字数分ループする
	while (str[i] != '\0')
	{
		//i:0 ch:'-' //i:1 ch:'-'
		//i:2 ch:'P' i:3 ch:'E'
		//i:4 ch:'N' i:5 ch:'-'
		//i:6 ch:'N' i:7 ch:'*'
		//i:8 ch:'*' i:9 ch:'*'
	    //i:10 ch:'I' i:11 ch:'-'
		//i:12 ch:'-' i:13 ch:'N'
		//i:14 ch:'K' i:15 ch:'-'
		ch = str[i];
		switch (state)//i:3 state:1  i:6 state:0 i:7 state:1
			//i:8 state:2  i:9 state:1 i:10 state:2 i:11 state:1
			//i:12 state:0
		{
			case 0:
				s++;//i:0 s:1  i:1 s:2  i:2 s:3  i:6 s:4 i:12 s:5
				//i:13 s:6
				if (ch != '-')
				{
					buf[j++] = ch;
					//buf[0]:'P' j:1  buf[3]:'N' j:4 buf[6]:'N' j:7
					state = 1;
				}
				break;
			case 1:
				switch (ch) //i:3 ch:'E' i:4 ch:'N' i:5 ch:'-'
					//i:7 ch:'*'  i:9 ch:'*' i:11 ch:'-' i:14 ch:'K'
					//i:15 ch:'-'
				{
					case '*':
						state = 2;
						break;
					case '-':
						state = 0;  //i:11 ch : '-'
						break;
					default:
						buf[j++] = ch;//buf[1]:'E' j:2
						//buf[2]:'N' j:3  buf[7]:'K' j:8
						break;
				}
				break;
			case 2: //i:8 ch:'*' i:10 ch:'I'
				t++; // t:2 
				if (ch == '*')
					buf[j++] = '*';//buf[4]:'*' j:5
				else
					buf[j++] = ch;//buf[5]:'I' j:6
				state = 1;
				break;
		}
		i++;
	}

	buf[j] = '\0';

	printf("%d\n",s);//s:6
	printf("%d\n", t);//t:2
	printf("%s\n", buf);//PENN*INK

	return 0;
}