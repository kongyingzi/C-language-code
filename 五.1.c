#include <stdio.h>
#include <math.h>
void Count(float,int);
int Factorial(int);
int main(void)
{
    int n,i;
    float x;

    scanf("%f",&x);
    for(n = 1;;n++)
    {
        i = pow(x,2 * n - 1) / Factorial(2 * n - 1);
        if(fabs(i) < 1e-7)
        {
            Count(x,n);
            printf("%d",n);
            break;
        }
    }

    return 0;
}
void Count(float x,int input)
{
    float S = 0;
    
    for(int i = 1;i <= input;i++)
    {
        if(i % 2 == 0)
            S += -pow(x,2 * i - 1) / Factorial(2 * i - 1);
        else
            S += pow(x,2 * i - 1) / Factorial(2 * i - 1);
    }
    printf("%.4f  ",S);
}
int Factorial(int input)
{
    int total = 1;
    for(int i = 1;i <= input;i++)
        total *= i;
    
    return total;
}