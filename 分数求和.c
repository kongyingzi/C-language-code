#include <stdio.h>

int main()
{
    int n,factorial;
    double sum = 0;
    scanf("%d",&n);
    for(int i = 1;i <= n;i++)
    {
        factorial = 1;
        for(int a = 1;a <= i;a++)
        {
            factorial *= a;
        }
        sum += (1.0/factorial);
    }
    printf("%f",sum);
    return 0;
}