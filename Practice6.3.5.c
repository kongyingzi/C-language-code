#include <stdio.h>
#define ROW 4
#define COLUMN 4
//ʵ��6.3��5��
int main(void)
{
    int a[ROW][COLUMN],i,j,k;

    for(i = 0;i < ROW;i++)
    {
        for(j = 0;j < i;j++)
            a[i][j] = 5;
        for(j = i,k = 1;j < COLUMN && k <= 4 - i;j++,k++)
        {                
            a[i][j] = k;
        }
    }
    for(i = 0;i < ROW;i++)
    {
        for(j = 0;j < COLUMN;j++)
            printf("%-3d",a[i][j]);
        printf("\n");
    }   


    return 0;
}