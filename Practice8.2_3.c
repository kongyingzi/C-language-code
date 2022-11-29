#include <stdio.h>
//สตั้8.2ฃจ3ฃฉ
void f(float * x,int * y,float * z)
{
    * y = (int) *x;
    *z = *x - *y;
}
void main()
{
    float a,c;
    int b;
    scanf("%f",&a);
    f(&a,&b,&c);
    printf("%f,%d,%f\n",a,b,c);
}