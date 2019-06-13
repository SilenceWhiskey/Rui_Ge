#include"pch.h"
#include"iostream"
void f1(float a[], int N);
void f2(float a[], int N);
int n1, n2, n3, n4, n5;
int main()
{
	int	N, i;
	float a[100];
	printf_s("输入人数:\n");
	scanf_s("%d", &N);
	printf_s("输入成绩:\n");
	for(i=0;i<N;i++)
		scanf_s("%f", &a[i]);
	f1(a, N);
	f2(a, N);
	printf_s("90-100:%d\n", n1);
	printf_s("80-89:%d\n", n2);
	printf_s("70-79:%d\n", n3);
	printf_s("60-69:%d\n", n4);
	printf_s("0-59:%d\n", n5);
	return 0;
}
void f1(float a[], int N)
{
	int i;
	float max = a[0], min = a[0], s = 0;
	for (i = 0; i < N; i++)
	{
		s += a[i];
		if (a[i] < min)
			min = a[i];
		if (a[i] > max)
			max = a[i];
	}
	printf_s("average:%.2f,", s / N);
	printf_s("max:%.2f,", max);
	printf_s("min:%.2f\n", min);
}
void f2(float a[], int N)
{
	n1 = n2 = n3 = n4 = n5 = 0;
	int i;
	for (i = 0; i < N; i++)
	{
		if (a[i] <= 100 && a[i] >= 90)
			n1++;
		else if (a[i] >= 80)
			n2++;
		else if (a[i] >= 70)
			n3++;
		else if (a[i] >= 60)
			n4++;
		else
			n5++;
	}
}
