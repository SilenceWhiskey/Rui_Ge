#include "pch.h"
#include <iostream>

int main()
{
	int days, number;
	scanf_s("%d,%d", &days, &number);
	for (; days>0; days--)
	{
		number += 1;
		number *= 2;
	}
	printf_s("%d", number);
	return 0;
}
