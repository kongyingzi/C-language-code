#include <stdio.h>

int main()
{
    int a,b;
    printf("Please input an int:");
    scanf("%d",&a);
    for(b=a;b<=(a+10);b++)
    {
        printf("%d\n",b);
    }
    return 0;
}