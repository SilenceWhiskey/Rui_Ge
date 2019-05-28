#include <iostream>
int isleap(int n);
int main(int argc, const char * argv[])
{
    // insert code here...
    int year,month,days,sum=0;
    scanf("%d.%d.%d",&year,&month,&days);
    if(isleap(year))
    {
        switch (month)
        {
            case 1:
                sum = days;
                break;
            case 2:
                sum = 31+days;
                break;
            case 3:
                sum = 29+31+days;
                break;
            case 4:
                sum = 31+29+31+days;
                break ;
            case 5:
                sum = 30+31+29+31+days;
                break;
            case 6:
                sum = 31+30+31+29+31+days;
                break;
            case 7:
                sum = 30+31+30+31+29+31+days;
                break;
            case 8:
                sum = 31+30+31+30+31+29+31+days;
                break;
            case 9:
                sum = 31+31+30+31+30+31+29+31+days;
                break;
            case 10:
                sum = 30+31+31+30+31+30+31+29+31+days;
                break;
            case 11:
                sum = 31+30+31+31+30+31+30+31+29+31+days;
                break;
            case 12:
                sum = 30+31+30+31+31+30+31+30+31+29+31+days;
                break;
            default:
                break;
        }
    }
    else
    {
        switch (month)
        {
            case 1:
                sum = days;
                break;
            case 2:
                sum = 31+days;
                break;
            case 3:
                sum = 28+31+days;
                break;
            case 4:
                sum = 31+28+31+days;
                break ;
            case 5:
                sum = 30+31+28+31+days;
                break;
            case 6:
                sum = 31+30+31+28+31+days;
                break;
            case 7:
                sum = 30+31+30+31+28+31+days;
                break;
            case 8:
                sum = 31+30+31+30+31+28+31+days;
                break;
            case 9:
                sum = 31+31+30+31+30+31+28+31+days;
                break;
            case 10:
                sum = 30+31+31+30+31+30+31+28+31+days;
                break;
            case 11:
                sum = 31+30+31+31+30+31+30+31+28+31+days;
                break;
            case 12:
                sum = 30+31+30+31+31+30+31+30+31+28+31+days;
                break;
            default:
                break;
        }
    }
    printf("第%d天",sum);
    return 0;
}
int isleap(int n)
{
    int flag = 0;
    if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0))
    {
        flag = 1;
        return flag;
    }
    else
    {
        return flag;
    }
}
