#include <stdio.h>

int main(void)
{
    char ch;
    int change_number = 0;

    while((ch = getchar()) != '#')
    {
        switch(ch)
        {
            case '.':
                    ch = '!';
                    change_number++;
                    break;
            case '!':
                    printf("%c",ch);
                    change_number++;
                    break;
        }
        printf("%c",ch);
    }
    printf("\n�滻�Ĵ���Ϊ:%d",change_number);

    return 0;
}