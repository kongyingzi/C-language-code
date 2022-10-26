#include <stdio.h>
#define LINE 4
//14(6)
int main(void)
{
    for(int i = 1;i <= LINE;i++)
    {
        for(int a = 1;a <= (2 * LINE - 2 * i);a++)
            printf(" ");
        for(int a = 1;a <= (2 * i - 1);a++)
        {
            printf("%c",'*');
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}
