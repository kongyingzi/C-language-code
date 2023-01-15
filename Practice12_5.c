#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int i,j,t;
    int A[100];

    srand((unsigned int)time(0));
    for(i = 0;i < 100;i++)
        A[i] = rand() % 10 + 1;
    for(i = 0;i < 100;i++)
        for(j = i + 1;j < 100;j++)
            if(A[j] > A[i])
            {
                t = A[j];
                A[j] = A[i];
                A[i] = t;
            }
    printf("这100个1~10随机值为:\n");
    for(i = 0;i < 100;i++)
    {
        printf("%d ",A[i]);
        if(0 == i % 10 && i != 0)
            printf("\n");
    }

    return 0;
}