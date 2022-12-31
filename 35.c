#include <stdio.h>
int main(void)
{
    int A[1000] = {0},n,i,j,t,num = 0;
    
    scanf("%d",&n);
    for(i = 0;i < n;i++)
        scanf("%d",&A[i]);
    for(i = 0;i < n;i++)
        for(j = 1;j < (n - i);j++)
            if(A[j - 1] > A[j])
            {
                t = A[j - 1];
                A[j - 1] = A[j];
                A[j] = t;
            }
    for(i = 1;i <= n;i++)
        if(A[i - 1] != A[i])
            num++;
    printf("%d\n",num);
    for(i = 1;i <= n; i++)
        if(A[i - 1] != A[i])
            printf("%d ",A[i - 1]);
    
    return 0;
}