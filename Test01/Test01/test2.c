#include <stdio.h>
#include <conio.h>


#if 0
int main()
{
	
	printf("숫자 키를 입력하세요. 해당하는 영단어를 알려드리겠습니다.\n");
	while (1)
	{
		printf(">");
		char n = getch(); // no echo (내가 누른 키 값이 화면상에 찍히기 전에 되돌려준다.)
		// getchar(); 는 엔터가 필요하다.

		if (n == '1') printf("%c : ONE\n", n);
		else if (n == '2') printf("%c : TWO\n", n);
		else if (n == '3') printf("%c : THREE\n", n);
		else if (n == '4') printf("%c : FOUR\n", n); 
		else if (n == '5') printf("%c : FIVE\n", n);
		else if (n == '6') printf("%c : SIX\n", n);
		else if (n == '7') printf("%c : SEVEN\n", n);
		else if (n == '8') printf("%c : EIGHT\n", n);
		else if (n == '9') printf("%c : NINE\n", n);
		else if (n == '0') printf("%c : ZERO\n", n);
		else if (n == 'q' || n == 'Q') break;
		else printf("wrong key\n");
	}
}
#endif


#if 0
int main()
{
	printf("숫자를 입력하세요. 해당하는 영단어를 알려드리겠습니다.\n");
	int k = 1;
	while (k)
	{
		printf("<");
		char n = getch();

		switch (n)
		{
		case '1': printf("%c : ONE\n", n); break;
		case '2': printf("%c : TWO\n", n); break;
		case '3': printf("%c : THREE\n", n); break;
		case '4': printf("%c : FOUR\n", n); break;
		case '5': printf("%c : FIVE\n", n); break;
		case '6': printf("%c : SIX\n", n); break;
		case '7': printf("%c : SEVEN\n", n); break;
		case '8': printf("%c : EIGHT\n", n); break;
		case '9': printf("%c : NINE\n", n); break;
		case '0': printf("%c : ZERO\n", n); break;

		case 'q':
		case 'Q': k = 0; break;
		}

	}
}
#endif


#if 0
int main()
{
	char* name[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	printf("숫자를 입력하세요.\n");
	printf("프로그램을 끝내시려면 'Q'를 누르세요.\n\n");
	while (1)
	{
		printf("<");
		char n = getch();
		int m = n - 0x30; // ASCII값을 num 값으로 변경.
		if (m >= 0 && m <= 9)
			printf("%c : %s\n", n, name[m]);
		else if (n == 'q' || n == 'Q')
			break;
	}

}
#endif

#if 0
int test01();
void test02(int a);

int test01()
{
	char* name[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	printf("숫자를 입력하세요.\n");
	printf("프로그램을 끝내시려면 'Q'를 누르세요.\n\n");
	while (1)
	{
		printf("<");
		char n = getch();
		int m = n - 0x30; // ASCII값을 num 값으로 변경.
		if (m >= 0 && m <= 9)
			printf("%c : %s\n", n, name[m]);
		else if (n == 'q' || n == 'Q')
			break;
	}

}
void test02(int a)								// 문자열과 문자배열
{
	char ca[] = "Hello";						// ca[0] : H 부터 ~ ca[5] : \0
												// int i <- 예전 표준, 밖에서 변수 선언 했었어야 한다.
	for (int i = 0; i < 10; i++)					// 0에서부터 5까지
	{
		printf("ca[%d]:%c (%02x)\n",i,ca[i], ca[i]);
	}
	ca[2] -= 1;
	ca[3] -= 1;

	for (int i = 0; i < 10; i++)					// 0에서부터 5까지
	{
		printf("ca[%d]:%c (%02x)\n", i, ca[i], ca[i]);
	}
}


int main(void)
{
	test02(1);
}
#endif

#if 1
int main(void)
{
	while (1)
	{
		printf("<");
		char c = getch();

		if (c >= 0x30 && c <= 0x39)
		{
			printf("숫자\n");
		}
		else if (c >= 0x41 && c <= 0x5a)
		{
			printf("대문자\n");
		}
		else if (c >= 0x61 && c <= 0x7a)
		{
			printf("소문자\n");
		}
		else if (c == 0x1b)
		{
			break;
		}
		else
		{
			printf("특수문자\n");
		}

	}
}
#endif
