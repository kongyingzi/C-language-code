#include <stdio.h>
int Count(void);
int main(void)
{
    int i;

    for(i = 0;i < 5;i++)
        printf("���ǵ�%d�ε���Count����\n",Count());

    return 0;
}
int Count(void)
{
    static int number;

    number++;

    return number;
}