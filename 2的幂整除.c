#include <stdio.h>

int main()
{
    int n,i;
    static int b = 1;
    scanf("%d",&n);
    for(i = 1; i<= n;i++)
    {
         b *= 2;
        if(n % b != 0)
        {
            break;
        }
    }
    printf("%d",(i-1));
    return 0;
}