#include <stdio.h>
#include <limits.h>
//ʵ��8��1��3.��2��
#define NUM 5
int min(int,int);

int main(void)
{
    int a,b,i,minletter = INT_MAX;

    printf("������%d������:\n",2 * NUM);
    for(i = 1;i <= NUM;i++)
    {
        scanf("%d%d",&a,&b);
        if(minletter > min(a,b))
            minletter = min(a,b);
    }

    printf("��%d����������С����:%d\n",2 * NUM,minletter);

    return 0;
}
int min(int x,int y)
{
    if(x < y)
        return x;
    else 
        return y;
}