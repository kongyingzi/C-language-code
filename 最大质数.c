#include <stdio.h>

int main()
{
    int n,i;

    scanf("%d",&n);
    for(int max_prime_number = (n-1);max_prime_number > 1;max_prime_number--)
    {
        for(i = 2;i < max_prime_number;i++)
        {
            if(max_prime_number % i == 0)
            {
                break;
            }
        }
        if(i == max_prime_number)
        {
            printf("%d\n",max_prime_number);
            break;
        }
    }
    return 0;
}