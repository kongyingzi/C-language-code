#include <stdio.h>

int main()
{
    int n,max,min,a;
    max = min = 0;
    scanf("%d",&n);
    int number;
    scanf("%d",&number);
    max = min = number;
    a = n-1;
    while(a--)
    {
        int number;
        scanf("%d",&number);
        if(max < number)
        {
            max = number;
        }
        else if(min > number)
        {
            min = number;
        }
    }
    printf("%d %d",min,max);
    return 0;
}