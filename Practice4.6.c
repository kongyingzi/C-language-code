#include <stdio.h>
void main()
{
    int i,s = 0;
    for(i = 1;i <= 100;i++)
    {
        s += i;
        if(s == 55)
            break;
    }
    printf("%d\n",i);
}
