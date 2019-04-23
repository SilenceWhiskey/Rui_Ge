#include"pch.h"
#include"iostream"
#include"math.h"
int main()
{
	void root(float a, float b, float c);
	float a, b, c;
	scanf_s("%f,%f,%f", &a, &b, &c);
	if (fabs(a) < 1e-6)
	{
		printf_s("Error\n");
	}
	else
	{
		root(a, b, c);
	}
	return 0;
}
void root(float a, float b, float c)
{
	float d, x1, x2, jp, ip;
	d = b * b - 4 * a * c;
	if (fabs(d) <= 1e-6)
	{
		printf_s("x1=x2=%.2f\n", -b / (2 * a));
	}
	else if (d>1e-6)
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		printf_s("x1=%.2f,x2=%.2f\n", x1, x2);
	}
	else
	{
		jp = -b / (2 * a);
		ip = sqrt(-d) / (2 * a);
		printf_s("x1=%.2f+%.2fi,", jp, ip);
		printf_s("x2=%.2f-%.2fi\n", jp, ip);
	}
}
