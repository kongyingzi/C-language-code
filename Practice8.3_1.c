#include <stdio.h>
//实验8（1）3.（1）
void Change(int *,int *,int *);
int main(void)
{
    int a,b,c;
    int * p1,*p2,*p3;
    printf("请输入三个整数:");
    scanf("%d%d%d",&a,&b,&c);
    p1 = &a,p2 = &b,p3 = &c;
    Change(p1,p2,p3);
    printf("%-2d%-2d%-2d",*p1,*p2,*p3);
    return 0;
}
void Change(int * pa,int * pb,int * pc)
{
    int t;

    if(*pa < *pb)
    {
        t = *pa;
        *pa = *pb;
        *pb = t;
    }
    if(*pa < *pc)
    {
        t = *pa;
        *pa = *pc;
        *pc = t;
    }
    if(*pb < *pc)
    {
        t = *pb;
        *pb = *pc;
        *pc = t;
    }
}