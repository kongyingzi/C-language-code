#include <stdio.h>
#define NEED 8
//ʵ��6.3.2
int main(void)
{
    long long a[20] = {2,3};
    int i;

    for(i = 2;i < 20;i++)
        a[i] = a[i - 2] * a[i - 1];
    printf("a����ĵ�%d����Ϊ:%lld",NEED,a[NEED - 1]);

    return 0;
}