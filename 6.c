#include <stdio.h>

int main(void)
{
    char ch;

    while((ch = getchar()) != '#')
    {
        if(ch != '\n')
        {
            if(ch == 'b')
            {
                printf("Step 1\n");
                break;
            }
            else if(ch == 'h')
            {
                printf("Step 1\n");
                printf("Step 3\n");
            }
            else if(ch == 'c')
                printf("Step 1\n");
            else
            {
                printf("Step 1\n");
                printf("Step 2\n");
                printf("Step 3\n");
            }
        }
    }
    printf("Done\n");

    return 0;
}