#include <stdio.h>
//实验7.3（3）
int f(int [],int);
int main(void)
{
    int i,x[100];
    int num = 20;
    
    printf("请输入%d个数:\n",num);
    for(i = 0;i < 20;i++)
        scanf("%d",&x[i]);
    printf("%d个数中最大的数为:%d\n",num,f(x,num));

    return 0;
}
int f(int x[],int n)
{
    int max = x[0];

    for(int i =1;i < n;i++)
        if(max < x[i])
            max = x[i];
    
    return max;
}