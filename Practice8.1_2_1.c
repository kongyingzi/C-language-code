#include <stdio.h>
//ʵ��8��1��1.��2����һ��
void main()
{
    int * p,m;
    scanf("%d",&m);
    p = &m;
    printf("%d",*p);
}