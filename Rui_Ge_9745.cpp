
#include "pch.h"
#include <iostream>

int main()
{
	int w = 1, x = 2, y = 3, z = 4;
	printf_s("%d", w < x ? w : y < z ? y : z);
	return 0;
}
