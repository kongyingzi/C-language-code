#include <stdio.h>
void copy_ptr(double *,const double *,int);
int main(void)
{
    double A[7] = {4.3,4.3,4.3,3.0,2.0,1.2,0.2};
    double B[3];
    
    copy_ptr(B,A + 2,3);
    for(int i = 0;i < 3;i++)
        printf("%.1f ",B[i]);

    return 0;
}
void copy_ptr(double * aim,const double * copy,int num)
{
    int i;
    
    for(i = 0;i < num;i++)
        *(aim + i) = *(copy + i);
}