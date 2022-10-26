#include <stdio.h>
//14(1)
int main(void)
{
    int sum1 = 0,sum2 = 0;

    for(int k = 1;k <= 100;k++)
        sum1 += k;
    for(int k = 1;k <= 50;k++)
        sum2 += (k * k);
    printf("k求和(k从1到100)加上k平方求和(k从1到50)的结果为：%d"
    ,(sum1 + sum2));
    
    return 0;
}