#include <stdio.h>

int main()
{
    int i,b,a,c; /*i是每行要打印的星号，b用于打印星号*/
    i = 1;
    while(i<=9)
    {
        a = (9-i)/2;
        for(c=1;c<=a;c++)
        {
            printf(" ");
        }
        for(b=1;b<=i;b++)
        {
            printf("*");
        }
        printf("\n");
        i += 2;
    }
    i=7;
    while(i>=1)
    {
        a = (9-i)/2;
        for(c=1;c<=a;c++)
        {
            printf(" ");
        }
        for(b=1;b<=i;b++)
        {
            printf("*");
        }
        printf("\n");
        i -= 2;
    }
    return 0;
}
