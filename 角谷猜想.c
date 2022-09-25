#include <stdio.h>

int main()
{
    int n,i;

    scanf("%d",&n);
    if(n % 2 == 0)
    {
        while(n>1)
        {
            n = n/2;
            printf("%d\n",n);
            if(n % 2 != 0 && n != 1)
            {
                n = n*3+1;
                printf("%d\n",n);
            }            
        }
    }
    else
    {
        i = n*3+1;
        printf("%d\n",i);
        while(i>1)
        {
            i = i/2;
            printf("%d\n",i); 
            if(i % 2 != 0 && i != 1)
            {
                i = i*3+1;
                printf("%d\n",i);
            }
        }
    }
    return 0;
}