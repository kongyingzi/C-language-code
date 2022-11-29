#include <stdio.h>
#include <limits.h>
//实验8（1）3.（2）
#define NUM 5
int min(int,int);

int main(void)
{
    int a,b,i,minletter = INT_MAX;

    printf("请输入%d个数字:\n",2 * NUM);
    for(i = 1;i <= NUM;i++)
    {
        scanf("%d%d",&a,&b);
        if(minletter > min(a,b))
            minletter = min(a,b);
    }

    printf("这%d个数字里最小的是:%d\n",2 * NUM,minletter);

    return 0;
}
int min(int x,int y)
{
    if(x < y)
        return x;
    else 
        return y;
}