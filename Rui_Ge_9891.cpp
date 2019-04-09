#include"pch.h"
#include"iostream"
long fib(int g)
{
	switch (g)
	{
	case 0:
		return 0;
	case 1:
	case 2:
		return 1;
	}
	return (fib(g - 1) + fib(g - 2));
}
int main()
{
	long k;
	k = fib(5);
	printf_s("k=%d\n", k);
	return 0;
}
