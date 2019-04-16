#include"pch.h"
#include"iostream"
int main()
{
	int i, j, number = 0;
	for (i = 10; i <= 1000; i++)
	{
		number = 0;
		for (j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				number += j;
			}
		}
		if (number == i)
			printf_s("%d ", number);

	}
	return 0;
}
