#include <stdio.h>
void copy_arr(double *,const double *,int);
void copy_ptr(double *,const double *,int);
void copy_ptrs(double *,const double *,double *);
int main(void)
{
    int i;
    double source[5] = {1.1,2.2,3.3,4.4,5.5};
    double target1[5];
    double target2[5];
    double target3[5];
    
    copy_arr(target1,source,5);
    copy_ptr(target2,source,5);
    copy_ptrs(target3,source,source + 5);

    printf("target1的数组如下:\n");
    for(i = 0;i < 5;i++)
        printf("%.1f ",target1[i]);
    printf("\ntarget2的数组如下:\n");
    for(i = 0;i < 5;i++)
        printf("%.1f ",target2[i]);
    printf("\ntarget3的数组如下:\n");
    for(i = 0;i < 5;i++)
        printf("%.1f ",target3[i]);
    
    return 0;
}
void copy_arr(double aim[],const double copy[],int num)
{
    int i;
    
    for(i = 0;i < num;i++)
        aim[i] = copy[i];
}
void copy_ptr(double * aim,const double * copy,int num)
{
    int i;
    
    for(i = 0;i < num;i++)
        *(aim + i) = *(copy + i);
}
void copy_ptrs(double * aim,const double * copy,double * last)
{
    int i;
    
    for(i = 0;(copy + i) != last;i++)
        *(aim + i) = *(copy + i);
}