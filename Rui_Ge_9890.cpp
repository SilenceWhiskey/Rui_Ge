#include "pch.h"
#include <iostream>
void fun();
int main()
{
	int cc;
	for (cc = 1; cc < 4; cc++)
		fun();
	printf_s("\n");
	return 0;
}
void fun()
{
	static int a = 0;
	a += 2;
	printf_s("%d", a);
}
