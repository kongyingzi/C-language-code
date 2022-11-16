#include <stdio.h>
#define N 8
void main()
{
    int a[N],i,j,t;

    for(i = 0;i < N;i++)
        scanf("%d",&a[i]);
    i = 0;
    j = N - 1;
    while(i < j)
    {
        t = a[i];
        a[i] = a[j];
        a[j] = t;
        i++;
        j--;
    }
    for(i = 0;i < N;i++)
        printf("%d ",a[i]);
    printf("\n");
}