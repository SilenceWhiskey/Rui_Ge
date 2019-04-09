#include "pch.h"
#include <iostream>
unsigned fun6(unsigned num);
int main()
{
	unsigned n = 26;
	printf_s("%d\n", fun6(n));
	return 0;
}
unsigned fun6(unsigned num)
{
	unsigned k = 1;
	do
	{
		k *= num;
		num /= 10;
	} while (num);
	return k;
}
