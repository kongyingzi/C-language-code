#include <stdio.h>
#include <math.h>

int main()
{
    int A[8];
    for(int i = 0;i <= 7;i++)
    {
        A[i] = pow(2,i);
    }
    int i = 0;
    do
    {
        printf("%d ",A[i]);
        i++;
    }while(i <= 7);
    return 0;
}