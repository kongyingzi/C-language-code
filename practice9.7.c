#include <stdio.h>
#include <ctype.h>
int judge(char);

int main(void)
{
    char ch;

    printf("ÇëÊäÈëÒ»¶Î×Ö·û£º\n");
    while((ch = getchar()) != EOF)
    {
        printf("%d\n",judge(ch));
        printf("ÇëÊäÈëÒ»¶Î×Ö·û£º\n");
    }

    return 0;
}

int judge(char input)
{
    if(isalpha(input))
    {
        if(islower(input))
            return (input - 'a');
        else
            return (input - 'A');
    }
    else
        return -1;
}