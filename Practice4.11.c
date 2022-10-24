#include <stdio.h>
void main()
{
    int i,j,k = 0,m = 0;
    for(i = 0;i < 2;i++)
    {
        for(j = 0;j < 3;j++)
            k++;
        k -= j;
    }
    m = i + j;
    printf("k = %d,m = %d\n",k,m);
}
