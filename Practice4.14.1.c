#include <stdio.h>
//14(1)
int main(void)
{
    int sum1 = 0,sum2 = 0;

    for(int k = 1;k <= 100;k++)
        sum1 += k;
    for(int k = 1;k <= 50;k++)
        sum2 += (k * k);
    printf("k���(k��1��100)����kƽ�����(k��1��50)�Ľ��Ϊ��%d"
    ,(sum1 + sum2));
    
    return 0;
}