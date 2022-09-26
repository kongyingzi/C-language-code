#include <stdio.h>

int main()
{
    float a;

    scanf("%f",&a);
    printf("The input is %+.3f or %.3E.",a,a);
    return 0;
}