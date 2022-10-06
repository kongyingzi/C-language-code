#include <stdio.h>

int main()
{
    char A[] = "FEDCBA";
    for(int i = 0;i <= 5;i++)
    {
        for(int a = 0;a <= i;a++)
        {
            printf("%c",A[a]);
        }
        printf("\n");
    }
    return 0;
}