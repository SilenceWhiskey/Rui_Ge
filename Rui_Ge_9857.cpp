#include "pch.h"
#include <iostream>

int main()
{
	int i, j;
	for (i = 1; i <= 10; i++)
	{
		if (i <= 5)
		{
			printf_s(" ");
		}
		for (j = 11 - i; j > 0; j--)
		{
			printf_s(" ");
			if (2 * j - 1 <= 10)
			{
				printf_s(" ");
			}
		}
		for (j = 1; j <= i; j++)
		{
			printf_s("%d", 2 * j - 1);
		}
		printf_s("\n");
	}
	return 0;
}
