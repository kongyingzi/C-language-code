#include <stdio.h>
//ÊµÑé8£¨1£©1.£¨5£©
void swap(int * a,int * b);
void main()
{
    int x = 3,y = 5,*p1 = &x,*p2 = &y;
    printf("%d,%d\n",x,y);
    swap(p1,p2);
    printf("%d,%d\n",x,y);
}
void swap(int * a,int * b)
{
    int t;
    t = *a,*a = *b,*b = t;
}