#include <stdio.h>

int main()
{
    int n,number,i;//n为直角三角形的高度，number为每行字符数量,i用于打印字符
    char a;//a为构成直角三角形的字符

    scanf("%c %d",&a,&n);
    for(number=1;number<=n;number++)
    {
        for(i=1;i<=number;i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
