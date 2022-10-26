#include <stdio.h>
#include <stdbool.h>
#define START 3
#define END 100
bool IsPrime(int);
//14(5)
int main(void)
{
    int n;
    int sum = 0;

    for(int i = START;i <= END;i++)
    {
        if(IsPrime(i))
            sum += i;
    }
    printf("%d~%d之间的所有素数之和为:%d",START,END,sum);
    return 0;
}
bool IsPrime(int input)
{
    bool judge = true;
    for(int i = 2;i < input;i++)
    {
        if(input % i == 0)
            judge = false;
    }

    return judge;
}