#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int A[100000];
    printf("%d\n",n);
    for(int i = 0;i < n;i++)
    {
        long long number;
        scanf("%ld",&number);
        A[i] = number;
    }
    for(int a = (n-1);a >= 0;a--)
    {
        printf("%ld\n",A[a]);
    }
    return 0;
}