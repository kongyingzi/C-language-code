#include <stdio.h>
#include <stdbool.h>
bool IsPrime(int);
//14(4)
int main(void)
{
    int n;
    
    scanf("%d",&n);
    if(IsPrime(n))
        printf("%d ������.\n",n);
    else
        printf("%d ��������.\n",n);
    return 0;
}
bool IsPrime(int input)
{
    bool judge = true;
    for(int i = 2;i < input;i++)
    {
        if(input % i == 0)
            judge = false;
    }

    return judge;
}