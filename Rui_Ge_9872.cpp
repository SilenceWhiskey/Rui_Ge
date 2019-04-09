#include"pch.h"
#inlcude"iostream"
int main()
{
    int count = 0, sum;
	long number,t;
	for (number = 10035; number < 100000; number += 45)
	{
		sum = 0;
		t = number;
		while (t)
		{
			sum += t % 10;
			t /= 10;
		}
		if (sum == 9)
			count++;
	}
	printf_s("%d", count);
	return 0;
}
