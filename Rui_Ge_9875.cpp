#include"pch.h"
#include"iostream"
int main()
{
	int sum=0, s=0;
	int n,i;
	scanf_s("%d", &n);
	for (i = 0; i <= n; i++)
	{
		s += i;
		sum += s;
	}
	printf_s("%d", sum);
	return 0;
}
