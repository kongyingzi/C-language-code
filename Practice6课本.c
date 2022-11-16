#include <stdio.h>
//课本169页第三题
int main(void)
{
    int A[10],i,j,a;

    for(i = 0;i < 10;i++)
        scanf("%d",&A[i]);
    for(i = 0;i < 10;i++)
    {
        for(j = i + 1;j < 10;j++)
            if(A[i] > A[j])
            {
                a = A[i];
                A[i] = A[j];
                A[j] = a;
            }
    }
    for(i = 0;i < 10;i++)
        printf("%d ",A[i]);

    return 0;
}
