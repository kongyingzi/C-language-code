#include <stdio.h>
int Count(void);
int main(void)
{
    int i;

    for(i = 0;i < 5;i++)
        printf("这是第%d次调用Count函数\n",Count());

    return 0;
}
int Count(void)
{
    static int number;

    number++;

    return number;
}