#include <stdio.h>

int main()
{
    int n,m,sum;
    sum = 0;
    scanf("%d %d",&n,&m);
    while(n--)
    {
        int ai;
        scanf("%d",&ai);
        if(ai >= m)
        {
            sum += ai;
        }
    }
    printf("%d",sum);
    return 0;
}