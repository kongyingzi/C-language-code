#include <stdio.h>
int Fibonacci_sequence(int);

int main(void)
{
    int num;

    printf("������쳲��������е�����:(��qֹͣ)\n");
    while((scanf("%d",&num)) == 1)
    {
        printf("%d",Fibonacci_sequence(num));
        printf("\n������쳲��������е�����:(��qֹͣ)\n");
    }

    return 0;
}
int Fibonacci_sequence(int input)
{
    int first,second;
    int integer = 1;

    for(int i = 1;i <= input;i++)
    {
        if(i % 2 == 0)
            second = integer;
        else
            first = integer;
        if(i > 2)
        {
            integer = first + second;
        }
    }

    return integer;
}