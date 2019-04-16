#include"pch.h"
#include"iostream"
int main()
{
	int peach = 1, day;
	for (day = 1; day < 7; day++)
	{
		peach += 1;
		peach *= 2;
	}
	printf_s("%d", peach);
	return 0;
}
