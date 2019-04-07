#include "pch.h"
#include <iostream>

int main()
{
	int i = 5, j = 4, k = 6;
	float f;
	f = (i < j && i < k) ? i : (j < k) ? j : k;
	printf_s("%f", f);
	return 0;
}
