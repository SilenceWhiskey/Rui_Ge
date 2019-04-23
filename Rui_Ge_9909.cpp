#include"pch.h"
#include"iostream"
#include"math.h"
int prime(int n);
int main()
{	int m=0,i;
	for (i = 200; i <= 300; i++)
	{
		if (prime(i) == 0)
		{
			continue;
		}
		else
		{
			m++;
			printf_s("%d,", i);
			if (m % 5 == 0)
			{
				printf_s("\n");
			}
		}
	}
	if (prime(m))
		printf_s("");
	else
		printf_s("");
	return 0;
}
int prime(int n)
{
	int i;
	for (i = 2; i <= n - 1; i++)
		if (n % i == 0)
			break;
	if (i == n)
		return 1;
	else
		return 0;

}
