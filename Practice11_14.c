#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(int argc,char * argv[])
{
    double a;
    int b,i;
//a作为底数，b作为次幂
    a = atof(argv[1]);
    b = atoi(argv[2]);
    printf("%.3f",pow(a,b));

    return 0;
}