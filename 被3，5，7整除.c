#include <stdio.h>

int main()
{
    int A[3] = {3,5,7};
    int n,number;

    number = 0;
    scanf("%d",&n);
    for(int i = 0;i <= 2;i++)
    {
        if(n % A[i] == 0)
        {
            printf("%d ",A[i]);
            number += 1;
        }
    }
    if(number == 0)
    {
        printf("%c",'n');
    }
    return 0;
}