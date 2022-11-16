#include <stdio.h>
//สตั้6.1ฃจ4ฃฉ
void main()
{
    int i,a[20] = {1,1};

    for(i = 2;i < 20;i++)
        a[i] = a[i - 2] + a[i - 1];
    for(i = 0;i < 20;i++)
        printf("%d\t",a[i]);
    putchar('\n');
}