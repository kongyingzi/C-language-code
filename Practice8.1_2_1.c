#include <stdio.h>
//实验8（1）1.（2）第一种
void main()
{
    int * p,m;
    scanf("%d",&m);
    p = &m;
    printf("%d",*p);
}