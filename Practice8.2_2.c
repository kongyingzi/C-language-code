#include <stdio.h>
//ʵ��8.2��2��
void change(int * x,int * y,int * z)
{
    int t;
    t = *x;
    *x = *y;
    *y = *z;
    *z = t;
}
void main()
{
    int a,b,c;
    scanf("%d,%d,%d",&a,&b,&c);
    change(&a,&b,&c);
    printf("%d,%d,%d\n",a,b,c);
}