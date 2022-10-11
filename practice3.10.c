#include <stdio.h>
//3.10(1)µÄÌâ
int main(void)
{
    float x,y;
    scanf("%f",&x);
    if(x < 1)
    {
        y = x;
        printf("y = %f",y);
    }
    else if(x >= 1 && x < 10)
    {
        y = 3 - x / 5;
        printf("y = %f",y);
    }
    else
    {
        y = 3 * x - 11;
        printf("y = %f",y);
    }
    return 0;
}