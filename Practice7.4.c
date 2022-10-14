#include <stdio.h>

int main(void)
{
    char ch;
    int change_number = 0;

    while((ch = getchar()) != '#')
    {
        if(ch == '.')
        {
            ch = '!';
            change_number++;
        }    
        else if(ch == '!')
        {
            printf("%c",ch);
            change_number++;
        }
        printf("%c",ch);
    }
    printf("替换的次数为:%d",change_number);

    return 0;
}