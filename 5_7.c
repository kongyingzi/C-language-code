#include <stdio.h>

void Cube(double a)
{
    double cube = a*a*a;
    printf("%.1f",cube);
}

int main()
{
    double i;
    scanf("%lf",&i);
    Cube(i);
    return 0;
}