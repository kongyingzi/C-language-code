#include <stdio.h>
void Perform(const int *,int);
void DoubleStatic(int *,int);
int main(void)
{
    int A[3][5] = 
    {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
    };
    int i,j;

    printf("原数组元素为:\n");
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 5;j++)
            printf("%d ",A[i][j]);
        printf("\n");
    }
    for(i = 0;i < 3;i++)
        DoubleStatic(A[i],5);
    printf("加倍后的数组元素为:\n");
    for(i = 0;i < 3;i++)
    {
        Perform(A[i],5);
        printf("\n");
    }

    return 0;
}
void Perform(const int * p,int column)
{
    int i;

    for(i = 0;i < column;i++)
        printf("%d ",*(p + i));
}
void DoubleStatic(int * p,int column)
{
    int i;

    for(i = 0;i < column;i++)
        *(p + i) *= *(p + i);
}