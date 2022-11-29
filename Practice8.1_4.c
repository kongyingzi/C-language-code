#include <stdio.h>
//ÊµÑé8£¨1£©1.£¨4£©
int add(int * a,int * b)
{
    int sum;
    sum = *a + *b;
    
    return sum;
}
void main()
{
    int x,y,z;
    x= 5;y = 9;
    z = add(&x,&y);
    printf("%d\n",z);
}