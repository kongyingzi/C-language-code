#include <stdio.h>
//สตั้6.1ฃจ5ฃฉ
void main()
{
    int i,j,m,n,a[3][4] = {43,32,22,13,11,22,33,44,36,23,26,31};

    m = n = 0;
    for(i = 0;i < 3;i++)
        for(j = 0;j < 4;j++)
            if(a[m][n] > a[i][j])
                m = i,n = j;
    printf("a[m][n] = %d,m = %d,n = %d\n",a[m][n],m,n);
}