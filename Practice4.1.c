#include <stdio.h>

void main(void)
{
    int i = 1,sum = 0;
    while(i < 10)
    {
        sum += i;
        i += 2;
    }
    printf("%d\n",sum);
}
