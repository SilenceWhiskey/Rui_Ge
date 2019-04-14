#include"pch.h"
#include"iostream"
#include"math.h"
int main()
{
	int m, m1, n = 1, i;
	scanf_s("%d", &m);
	m1 = m;
	while(m1/10!=0)
	{
		n++;
		m1 = m1 / 10;
	}
	m1 = m;
	for (i = n - 1; i >= 0; i--)
	{
		int t = (int)pow(10, i);
		switch (m1 / t)
		{
		case 1: printf_s("one"); break;
		case 2: printf_s("two"); break;
		case 3: printf_s("three"); break;
		case 4: printf_s("four"); break;
		case 5: printf_s("five"); break;
		case 6: printf_s("six"); break;
		case 7: printf_s("seven"); break;
		case 8: printf_s("eight"); break;
		case 9: printf_s("nine"); break;
		case 0: printf_s("zero");
		}
		m1 = m1 % t;
	}
	printf_s("\n");
	return 0;
}
