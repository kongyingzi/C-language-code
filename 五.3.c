#include <stdio.h>

int main(void)
{
    float x,y;

    scanf("%f",&x);
    if(x <= -10)
        y = 2 * x;
    else if(x > -10 && x <= 10)
        y = 2 + x;
    else
        y = x / 10.0;

    printf("%.2f",y);

    return 0;
}