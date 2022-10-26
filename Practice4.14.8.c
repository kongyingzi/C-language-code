#include <stdio.h>
void EntireInteger(int);
#define n 1000
//14(8)
int main(void)
{
    EntireInteger(n);

    return 0;
}

void EntireInteger(int input)
{
    int sum = 0;

    printf("完数有以下:\n");
    for(int i = 2;i <= input;i++,sum = 0)
    {
        for(int a = 1;a < i;a++)
        {
            if(i % a == 0)
                sum += a;
        }
        if(sum == i)
            printf("%d ",i);
    }
}
