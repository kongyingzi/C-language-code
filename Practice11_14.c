#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(int argc,char * argv[])
{
    double a;
    int b,i;
//a��Ϊ������b��Ϊ����
    a = atof(argv[1]);
    b = atoi(argv[2]);
    printf("%.3f",pow(a,b));

    return 0;
}