#include <stdio.h>

int AGE(int a)
{
    int b = a * 365 * 24 * 60 * 60;
    return b;
}

int main()
{
    int age;
    scanf("%d",&age);
    printf("After converting,the age is : %d",AGE(age));
    return 0;
}