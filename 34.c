#include <stdio.h>
int main(void)
{
    int A[1001] = {0},B[1000];
    int n,i,num = 0;
    scanf("%d",&n);
    for(i = 0;i < n;i++)
        scanf("%d",&B[i]);
    for(i = 0;i < n;i++)
    {
        if(!A[B[i]])
        {
            A[B[i]]++;
            num++;
        }
    }
    printf("%d\n",num);
    for(i = 1;i <= 1000;i++)
        if(A[i])
            printf("%d ",i);
    return 0;
}