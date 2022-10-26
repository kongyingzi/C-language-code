#include <stdio.h>
#include <stdbool.h>
bool daffodil_number(int);

int main(void)
{
    int M;

    scanf("%d",&M);
    for(int i = M;;i++)
    {
        if(daffodil_number(i))
        {
            printf("%d",i);
            break;
        }
    }

    return 0;
}
bool daffodil_number(int input)
{
    bool judge = false;
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
    if(sum == initial_number)
        judge = true;

    return judge;
}