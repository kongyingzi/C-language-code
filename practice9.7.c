#include <stdio.h>
#include <ctype.h>
int judge(char);

int main(void)
{
    char ch;

    printf("������һ���ַ���\n");
    while((ch = getchar()) != EOF)
    {
        printf("%d\n",judge(ch));
        printf("������һ���ַ���\n");
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