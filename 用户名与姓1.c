#include <stdio.h>

int main()
{
    char surname[10];
    char name[10];

    printf("Please input your name and surname:");
    scanf("%s %s",name,surname);
    printf("%s",name);
    return 0;
}