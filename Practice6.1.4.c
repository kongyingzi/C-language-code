#include <stdio.h>
//ʵ��6.1��4��
void main()
{
    int i,a[20] = {1,1};

    for(i = 2;i < 20;i++)
        a[i] = a[i - 2] + a[i - 1];
    for(i = 0;i < 20;i++)
        printf("%d\t",a[i]);
    putchar('\n');
}