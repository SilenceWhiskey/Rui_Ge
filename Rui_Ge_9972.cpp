#include"pch.h"
#include"iostream"
#define N 5

void in(char x[][N])
{
	int i, j;
	for (i = 0; i < N; i++)
	{
		x[i][i] = '%';
		for (j = i + 1; j < N; j++)
		{
			x[i][j] = '@';
			x[j][i] = 'o';
		}
	}
}
void out(char x[][N])
{
	int i, j;
	for (i = 0; i < N; i++)
	{
		for(j=0;j<N;j++)
			printf_s("%c",x[i][j]);
		printf_s("\n");
	}
}
int main()
{
	char a[N][N];
	in(a);
	out(a);
	return 0;
}
