#include <stdio.h>
void ChangeNum(double *,double *,double *);

int main(void)
{
    double x,y,z;

    scanf("%lf%lf%lf",&x,&y,&z);
    printf("The original numbers of x,y and z are %.2f ,%.2f and %.2f\n"
    ,x,y,z);
    ChangeNum(&x,&y,&z);
    printf("The last numbers of x,y and z are %.2f ,%.2f and %.2f\n"
    ,x,y,z);

    return 0;
}
void ChangeNum(double * x,double * y,double * z)
{
    double i;

    if(*x > *y)
    {
        i = *x;
        *x = *y;
        *y = i;
    }
    if(*x > *z)
    {
        i = *x;
        *x = *z;
        *z = i;
    }
    if(*y > *z)
    {
        i = *y;
        *y = *z;
        *z = *y;
    }
}