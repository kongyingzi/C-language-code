#include <stdio.h>

int main()
{
    int i,b,a,c; /*i��ÿ��Ҫ��ӡ���Ǻţ�b���ڴ�ӡ�Ǻ�*/
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
