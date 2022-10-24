#include <stdio.h>
#include <math.h>
void main()
{
    int i,n;
    for(i = 2;i <= 20;i++)
    {
        for(n = 2; n <= (int)(sqrt((double)i));n++)
            if(i % n == 0)
                break;
        if(n == (int)(sqrt((double)i)) + 1)
            printf("%d,",i);
    }
}
