#include <stdio.h>
//ʵ��6.1��1��
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