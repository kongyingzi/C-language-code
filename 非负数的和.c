#include <stdio.h>

int main()
{
    int n,sum;
    sum = 0;
    scanf("%d",&n);
    while(n--)
    {
        int number;
        scanf("%d",&number);
        if(number >= 0)
        {
            sum += number;
        }
        else
        {
            break;
        }
    }
    printf("%d",sum);
    return 0;
}