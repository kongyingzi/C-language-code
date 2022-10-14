#include <stdio.h>

int main(void)
{
    char ch;
    char a,b;
    int number = 0;
    int continue_number = 0;

    while((ch = getchar()) != '#')
    {
        continue_number++;
        if(continue_number % 2 != 0)
        {
            if(ch == 'e')
                a = ch;
            else if(ch == 'i')
                b = ch;
        }
        else
            a = b ='1';
        if(a == 'e' && b == 'i')
            number++;
    }
    printf("\"ei\"出现的次数为:%d",number);

    return 0;
}