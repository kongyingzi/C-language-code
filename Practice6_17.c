#include <stdio.h>

int main()
{
    int foudation_money = 100;
    int years;
    for(years = 0;foudation_money > 0;years++)
    {
        foudation_money = (foudation_money * 1.08) - 10;
    }
    printf("Using all of these money needs %d years."
    ,years);
    return 0;
}