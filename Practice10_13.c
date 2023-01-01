#include <stdio.h>
void Restore(double A[][5],int,int);
double RowAverage(const double *,int);
double TotalAverage(const double A[][5],int,int);
double Max(const double A[][5],int,int);
void PrintStatic(const double A[][5],int,int);
int main(void)
{
    double A[3][5];
    int i;

    Restore(A,3,5);
    for(i = 0;i < 3;i++)
        printf("%d�е�Ԫ��ƽ��ֵΪ:%.2f\n",i + 1,RowAverage(A[i],5));
    printf("�����ά��������Ԫ�ص�ƽ��ֵΪ:%.2f\n",TotalAverage(A,3,5));
    printf("�����ά���������Ԫ��Ϊ%.2f\n",Max(A,3,5));
    PrintStatic(A,3,5);

    return 0;
}
void Restore(double A[3][5],int row,int column)
{
    int i,j;

    printf("��Ϊ3*5�Ķ�ά����������ֵ:\n");
    for(i = 0;i < row;i++)
    {
        printf("�������%d�е�Ԫ��:\n",i + 1);
        for(j = 0;j < column;j++)
            scanf("%lf",&A[i][j]);
    }
}
double RowAverage(const double * p,int column)
{
    double rowaverage,rowsum = 0;
    int i;

    for(i = 0;i < column;i++)
        rowsum += *(p + i);
    rowaverage = rowsum / column;

    return rowaverage;
}
double TotalAverage(const double A[3][5],int row,int column)
{
    int i,j;
    double totalsum = 0,totalaverage;

    for(i = 0;i < row;i++)
        for(j = 0;j < column;j++)
            totalsum += A[i][j];
    totalaverage = totalsum / (row * column);

    return totalaverage;
}
double Max(const double A[3][5],int row,int column)
{
    double max;
    int i,j;

    for(i = 0;i < row;i++)
        for(j = 0,max = A[0][0];j < column;j++)
            if(max < A[i][j])
                max = A[i][j];
    
    return max;
}
void PrintStatic(const double A[3][5],int row,int column)
{
    int i,j;

    printf("�����ά����Ԫ��Ϊ:\n");
    for(i = 0;i < row;i++)
    {
        for(j = 0;j < column;j++)
            printf("%.2f ",A[i][j]);
        printf("\n");
    }
}
