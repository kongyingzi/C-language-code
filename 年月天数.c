#include <stdio.h>
#include <stdbool.h>
bool LeapYear(int);
int DAY(int);
int main(void)
{
    int n,m,days;
    
    scanf("%d %d",&n,&m);
    if(LeapYear(n))
    {
        if(2 == m)
            days = 29;
        else
            days = DAY(m);
    }
    else
    {
        if(2 == m)
            days = 28;
        else
            days = DAY(m);
    }
    printf("%d",days);

    return 0;
}

bool LeapYear(int year)
{
    bool i;

    if(year % 4 == 0)
    {
        if(year % 400 == 0)
            i = true;
        else if(year % 100 == 0)
            i = false;
        else
            i = true;
    }
    else
        i =false;

    return i;
}

int DAY(int month)
{
    int days;
    bool bigmonth = false;
    int Bigmonth[7] = {1,3,5,7,8,10,12};

    for(int i = 0;i <= 6;i++)
    {
        if(Bigmonth[i] == month)
        {
            days = 31;
            bigmonth = true;
        }
    }
    if(!bigmonth)
        days = 30;

    return  days;
}