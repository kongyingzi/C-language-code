#include <stdio.h>
void copy_arr(double [],const double [],int);
int main(void)
{
    int i,j;
    double A[5][12] =
    {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };
    double B[5][10];

    for(i = 0;i < 5;i++)
        copy_arr(B[i],A[i],12);
    printf("二维数组B的元素为:\n");
    for(i = 0;i < 5;i++)
    {
        for(j = 0;j < 12;j++)
            printf("%.1f ",B[i][j]);
        printf("\n");
    }

    return 0;
}
void copy_arr(double aim[],const double copy[],int num)
{
    int i;
    
    for(i = 0;i < num;i++)
        aim[i] = copy[i];
}