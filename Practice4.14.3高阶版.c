#include <stdio.h>
#define START 1
#define END 999
void daffodil_number(int);

int main(void)
{
    printf("水仙花数有：\n");
    for(int i = START;i <= END;i++)
    {
        daffodil_number(i);
    }

    return 0;
}
void daffodil_number(int input)
{
    int initial_number = input;
    int b = input;
    int n = 0;//n表示数的位数
    int sum = 0;

    while(b > 0)
    {
        n++;
        b = b / 10;
    }
    while(input > 0)
    {
        int a = 1;
        for(int c = 1;c <= n;c++)
            a *= (input % 10);
        sum += a;
        input /= 10;
    }
//    printf("%d ",sum);
    if(sum == initial_number)
        printf("%d ",initial_number);
}