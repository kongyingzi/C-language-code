#include <stdio.h>
//ʵ��8.2��1��
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
    printf("����a,b:");
    scanf("%d,%d",pa,pb);
    c = min(pa,pb);
    printf("��СֵΪ:%d\n",c);
}