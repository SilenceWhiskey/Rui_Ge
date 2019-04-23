#include"pch.h"
#include"iostream"
void sum(float x);
float average(float y);
float s = 0;
int main()
{
	int i;
	float n,y;
	for (i = 1; i <= 10; i++)
	{
		scanf_s("%f", &n);
		sum(n);
	}
	y = average(s);
	printf_s("sum=%.2f\n", s);
	printf_s("average=%.2f", y);
	return 0;
}
void sum(float x)
{
	s += x;
}
float average(float y)
{
	return y / 10.0;
}
