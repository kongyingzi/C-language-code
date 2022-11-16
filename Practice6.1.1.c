#include <stdio.h>
//สตั้6.1ฃจ1ฃฉ
void main()
{
    int a[6],i;
    for(i = 0;i < 6;i++)
    {
        a[i] = 9 * (i + 2) % 5;
        printf("%d",a[i]);
    }
    putchar('\n');
}