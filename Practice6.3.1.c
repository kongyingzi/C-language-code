#include <stdio.h>
#include <stdbool.h>
//实验6.3（1）
bool Isprime(int);
#define START 2
#define END 100
int main(void)
{
    int a[100],num = 0,i;

    for(i = START;i <= END;i++)
    {
        if(Isprime(i))
        {
            a[num] = i;
            num++;
        }
    }
    printf("%d到%d之间的素数有:\n",START,END);
    for(i = 0;i < num;i++)
        printf("%d,",a[i]);

    return 0;
}
bool Isprime(int input)
{
    bool judge = 1;

    for(int i = 2;i * i <= input;i++)
        if(0 == input % i)
        {
            judge = 0;
            break;
        }

    return judge;
}