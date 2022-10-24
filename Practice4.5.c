#include <stdio.h>
#define A 100
void main()
{
    int i = 0,sum = 0;
    do
    {
        if(i == (i / 5) * 5)
            continue;
        sum += i;
    }while(++i < A);
    printf("%d\n",sum);
}
