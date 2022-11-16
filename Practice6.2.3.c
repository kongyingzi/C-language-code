#include <stdio.h>
//สตั้6.2ฃจ3ฃฉ
void main()
{
    int a[3][3] = {1,3,6,7,9,11,14,15,17};
    int s1 = 0,s2 = 0,i,j;

    for(i = 0;i < 3;i++)
        for(j = 0;j < 3;j++)
            if(i == j)
                s1 = s1 + a[i][j];
    for(i = 0;i < 3;i++)
        for(j = 2;j >= 0;j--)
            if(i + j == 2)
                s2 = s2 + a[i][j];
    printf("s1 = %d,s2 = %d\n",s1,s2);
}