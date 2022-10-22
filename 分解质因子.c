#include <stdio.h>
#include <stdbool.h>
bool IsPrime(long long);
void IS(long long);
int main(void)
{
    long long n;

    scanf("%lld",&n);
    IS(n);

    return 0;
}

bool IsPrime(long long input)
{
    bool isprime = true;
    for(long long i = 2;(i * i) <= input;i++)
    {
        if(input % i == 0)
        {
            isprime = false;
            break;
        }
    }
    
    return isprime;
}

void IS(long long input)
{
    if(input > 0)
    {
        for(long long i = 2;i <= input;i++)
        {
            if(input % i == 0)
            {
                if(IsPrime(i))
                    printf("%lld\n",i);
                IS((input / i));
                break;
            }
        }
    }

    return;
}