#include <stdio.h>
//สตั้6.2ฃจ1ฃฉ
void main()
{
    int i,a[10];

    for(i = 0;i < 10;i++)
        a[i] = i + 1;
    for(i = 0;i < 5;i++)
        a[9 - i] = a[i];
    for(i = 0;i < 10;i++)
        printf("%d",a[i]);
}