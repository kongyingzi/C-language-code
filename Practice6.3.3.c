#include <stdio.h>
//实验6.3(3)
int main(void)
{
    int a,num,n,max;//a是读取的数，n用于记录读取的数的个数，num记录非负的数的个数

    n = num = max = 0;
    while(n < 20)
    {
        scanf("%d",&a);
        if(a > 0)
        {
            num++;
            if(max < a)
                max = a;
        }
        n++;
    }
    printf("非负数的数的个数为%d,其中最大的是%d",num,max);

    return 0;
}