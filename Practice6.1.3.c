#include <stdio.h>
//สตั้6.1ฃจ3ฃฉ
void main()
{
    int n[3][3],i,j;

    for(i = 0;i < 3;i++)
        for(j = 0;j < 3;j++)
            n[i][j] = i + j;
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
            printf("%d\t",n[i][j]);
        putchar('\n');
    }
}