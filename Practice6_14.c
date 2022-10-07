#include <stdio.h>

int main()
{
    int number;
    int A[8],B[8];
    printf("Please enter eight numbers for the first team:\n");
    for(int i = 0;i <= 7;i++)
    {
        scanf("%d",&number);
        A[i] = number;
    }
    B[0] = A[0];
    for(int i = 1;i <= 7;i++)
    {
        B[i] = (A[i] + B[(i-1)]);
    }
    for(int i = 0;i <= 7;i++)
    {
        printf("%4d",A[i]);
    }
    printf("\n");
    for(int i = 0;i <= 7;i++)
    {
        printf("%4d",B[i]);
    }
    return 0;
}