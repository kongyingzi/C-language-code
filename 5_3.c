#include <stdio.h>

int main()
{
    int days;
    printf("Please input days:");
    scanf("%d",&days);
    while(days>0)
    {
        int week = days/7;
        printf("%d days are %d weeks, %d days",days,week,(days-week*7));
        scanf("%d",&days);
    }
    return 0;
}