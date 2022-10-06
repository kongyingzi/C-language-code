#include <stdio.h>

int main()
{
    char letter;
    printf("Please input an capital letter:");
    scanf("%c",&letter);
    for(char word = 'A';word <= letter;word++)
    {
        int blank = (int)(letter - word);
        while(blank--)
        {
            printf(" ");
        }
        for(char lineletter = 'A';lineletter <= word;lineletter++)
        {
            printf("%c",lineletter);
        }
        for(char contrast = (word - 1);contrast >= 'A';contrast--)
        {
            printf("%c",contrast);
        }
        printf("\n");
    }
    return 0;
}