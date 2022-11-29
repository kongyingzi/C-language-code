#include <stdio.h>
//实验8.2（1）
int min(int * x,int * y)
{
    int z;
    if(*x > *y) z = *y;
    else z = *x;
    return z;
}
void main()
{
    int a,b,c;
    int * pa,* pb;
    pa = &a;pb = &b;
    printf("输入a,b:");
    scanf("%d,%d",pa,pb);
    c = min(pa,pb);
    printf("较小值为:%d\n",c);
}