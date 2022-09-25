#include <stdio.h>

int main()
{
    int A,B;
    int maxi;//maxi为A和B的最大公约数

    scanf("%d%d",&A,&B);
    if(A<= B)
    {
        for(maxi = A;maxi >= 1;maxi--)
        {
            if(A % maxi == 0 && B % maxi == 0)
            {
                printf("%d",maxi);
                break;
            }
        }
    }
    else
    {
        for(maxi = B;maxi >= 1;maxi--)
        {
            if(A % maxi == 0 && B % maxi == 0)
            {
                printf("%d",maxi);
                break;
            }
        }
    }
    return 0;
}