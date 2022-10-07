#include <stdio.h>
#include <string.h>

int main()
{
    char strings[255];
    scanf("%s",strings);
    for(int i = strlen(strings);i >= 0;i--)
    {
        printf("%c",strings[i]);
    }
    return 0;
}