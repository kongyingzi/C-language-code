#include <stdio.h>
#include <string.h>

int main()
{
    char word[20];
    scanf("%s",word);
    for(int a = strlen(word);a >= 0;a--)
    {
        printf("%c",word[a]);
    }
    return 0;
}