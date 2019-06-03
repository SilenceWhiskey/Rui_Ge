#include"pch.h"
#include"iostream"
int sum1 = 0, sum2 = 0;
void sum(int a[3][3]);
int main()
{
	int a[3][3], i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf_s("%d," ,&a[i][j]);
		}
	}
	sum(a);
	printf_s("sum1=%d,sum2=%d\n", sum1, sum2);
	return 0;
}
void sum(int a[3][3])
{
	int i;
	for (i = 0; i < 3; i++)
	{
		sum1 = sum1 + a[i][i];
		sum2 = sum2 + a[i][3 - 1 - i];
	}
}
