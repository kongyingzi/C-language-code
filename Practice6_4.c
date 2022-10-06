#include <stdio.h>

int main()
{
    char word;
    for(int i = 1,word = 'A';i <= 6;i++)
    {
        int a = i;
        while(a--)
        {
            printf("%c",word);
            word++;
        }
        printf("\n");
    }
    return 0;
}