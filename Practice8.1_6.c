#include <stdio.h>
//ʵ��8.1��6��
int * f(int x,int y)
{
    if(x > y) 
        return &y;
    else 
        return &x;
}
void main()
{
    int x = 3,y = 5,*p;
    printf("%d,%d\n",x,y);
    p = f(x,y);
    printf("%d\n",*p);
}