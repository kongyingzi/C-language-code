#include <stdio.h>

int main()
{
    for(int i = 1;i <= 5;i++)
    {
        int a = i;
        while(a--)
        {
            printf("%c",'$');
        }
        printf("\n");
    }
    return 0;
}