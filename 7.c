#include <stdio.h>

int main(void)
{
    char ch;

    while((ch = getchar()) != '#')
    {
        if(ch == '\n')
            continue;
        printf("Step 1\n");
        if(ch == 'c')
            continue;
        else if(ch == 'b')
            break;
        else if(ch == 'h')
            goto laststop;
        printf("Step 2\n");
    laststop:printf("Step 3\n");
    }
    printf("Done\n");

    return 0;
}