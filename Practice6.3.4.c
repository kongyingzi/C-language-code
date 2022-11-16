#include <stdio.h>
#define NEED 40 //NEED表示需找出的元素在数组中对应的项数
//实验6.3（4）
int main(void)
{
    int a[100],i,j,sum = 0;

    for(j = 1;sum < 100;j += 2)
    {
        i = sum;
        sum += j;
        for(;i < sum;i++)
            a[i] = j;
    }
    printf("a这个数组的第%d项的数为:%d\n",NEED,a[NEED - 1]);

    return 0;
}