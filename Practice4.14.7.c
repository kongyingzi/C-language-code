#include <stdio.h>
void OddNumberElement(int);
#define n 100
//14(7)
int main(void)
{
    OddNumberElement(n);

    return 0;
}
void OddNumberElement(int input)
{
    int max,number;
    int need_number = 0;

    for(int i = input;i >= 1;i--)
    {
        number = 0;
        for(int a = 1;a < i;a++)
        {
            if(i % a == 0)
                number++;
        }
        if(0 != (number % 2))
        {
            need_number++;
            max = i;
            break;
        }
    }
    for(int b = (max - 1);b >= 1;b--)
    {
        number = 0;
        for(int a = 1;a < b;a++)
        {
            if(b % a == 0)
                number++;
        }
        if((number % 2) == 1)
            need_number++;
    }
    printf("有奇数个不同因子的整数有%d,其中最大的是%d"
    ,need_number,max);
}

