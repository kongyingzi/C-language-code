#include <stdio.h>
int main(void)
{
    int A[100][100] = {0};
    int n,m;
    int i,j,t;
    scanf("%d%d",&n,&m);
    for(i = 0;i < n;i++)
        for(j = 0;j < m;j++)
            scanf("%d",&A[i][j]);
    printf("%d %d\n",m,n);
    for(i = 0;i < ((m > n) ? m : n);i++)
        for(j = 0;j < i;j++)
        {
            t = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = t;
        }
    for(i = 0;i < m;i++)
    {
        for(j = 0;j < n;j++)
            printf("%d ",A[i][j]);
        printf("\n");
    }    
    return 0;
}