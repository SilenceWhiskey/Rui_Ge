#include <iostream>
#include <math.h>
float f(int n,int x);
int main(int argc, const char * argv[])
{
    // insert code here...
    int n,x;
    float s;
    scanf("%d,%d",&n,&x);
    s = f(n,x);
    printf("%.2f",s);
}
float f(int n, int x)
{
    float s;
    if( n == 1 )
    {
        s = x * x * x + x - 1;
    }
    else if( n == 2)
    {
        s = ( x + 5 ) * ( x + 5 ) * ( x + 5 ) + ( x + 5 ) - 1;
    }
    else if( n == 3 )
    {
        s = ( sin(x) * sin(x) * sin(x) + sin(x) - 1 );
    }
    return s;
}
