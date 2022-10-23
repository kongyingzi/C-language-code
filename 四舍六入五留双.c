#include <stdio.h>

int main(void)
{
    double f;
    int d;

    scanf("%lf%d",&f,&d);
    printf("%.*lf",d,f);

    return 0;
}