#include <stdio.h>
#define START 100
#define END 200
int prime(int);

int main(void)
{
    int num = 0;//判断素数的个数
    for(int i = START;i <= END;i++)
    {
        if(prime(i))
            num++;
    }
    printf("%d",num);

    return 0;
}
int prime(int m)
{
    int judge = 1;

    for(int i = 2;i * i <= m;i++)
    {
        if(m % i == 0)
            judge = 0;
    }
    
    return judge;
}