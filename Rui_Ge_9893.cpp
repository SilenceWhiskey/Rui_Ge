#include "pch.h"
#include <iostream>
#include"math.h"
int aa(int x, int y);

int main()
{
	int a = 24, b = 16, c;
	c = aa(a, b);
	printf_s("%d\n", c);
	return 0;
}
int aa(int x, int y)
{
	int w;
	while (y)
	{
		w = x % y;
		x = y;
		y = w;
	}
	return x;
}
