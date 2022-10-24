#include <stdio.h>

void main()
{
    int a = 5,y  = 0;
    do
    {
        a += 2,y += a;
        printf("a = %d y = %d\n",a,y);
        if(y > 10)break;
    }while(a == 7);
}
