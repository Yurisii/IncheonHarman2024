#include <stdio.h>
#include <conio.h>


#if 0
int main()
{
	
	printf("���� Ű�� �Է��ϼ���. �ش��ϴ� ���ܾ �˷��帮�ڽ��ϴ�.\n");
	while (1)
	{
		printf(">");
		char n = getch(); // no echo (���� ���� Ű ���� ȭ��� ������ ���� �ǵ����ش�.)
		// getchar(); �� ���Ͱ� �ʿ��ϴ�.

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
	printf("���ڸ� �Է��ϼ���. �ش��ϴ� ���ܾ �˷��帮�ڽ��ϴ�.\n");
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
	printf("���ڸ� �Է��ϼ���.\n");
	printf("���α׷��� �����÷��� 'Q'�� ��������.\n\n");
	while (1)
	{
		printf("<");
		char n = getch();
		int m = n - 0x30; // ASCII���� num ������ ����.
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
	printf("���ڸ� �Է��ϼ���.\n");
	printf("���α׷��� �����÷��� 'Q'�� ��������.\n\n");
	while (1)
	{
		printf("<");
		char n = getch();
		int m = n - 0x30; // ASCII���� num ������ ����.
		if (m >= 0 && m <= 9)
			printf("%c : %s\n", n, name[m]);
		else if (n == 'q' || n == 'Q')
			break;
	}

}
void test02(int a)								// ���ڿ��� ���ڹ迭
{
	char ca[] = "Hello";						// ca[0] : H ���� ~ ca[5] : \0
												// int i <- ���� ǥ��, �ۿ��� ���� ���� �߾���� �Ѵ�.
	for (int i = 0; i < 10; i++)					// 0�������� 5����
	{
		printf("ca[%d]:%c (%02x)\n",i,ca[i], ca[i]);
	}
	ca[2] -= 1;
	ca[3] -= 1;

	for (int i = 0; i < 10; i++)					// 0�������� 5����
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
			printf("����\n");
		}
		else if (c >= 0x41 && c <= 0x5a)
		{
			printf("�빮��\n");
		}
		else if (c >= 0x61 && c <= 0x7a)
		{
			printf("�ҹ���\n");
		}
		else if (c == 0x1b)
		{
			break;
		}
		else
		{
			printf("Ư������\n");
		}

	}
}
#endif
