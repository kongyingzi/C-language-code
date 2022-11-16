#include <stdio.h>
//สตั้6.1ฃจ6ฃฉ
void main()
{
    int i,j,t,a[4][4] = {11,22,33,44,1,2,3,4,10,20,30,40,12,22,32,42};

    for(i = 0;i < 4;i++)
        for(j = 0;j < i;j++)
        {
            t = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = t;
        }
    for(i = 0;i < 4;i++)
    {
        printf("\n");
        for(j = 0;j < 4;j++)
            printf("%d ",a[i][j]);
    }
}