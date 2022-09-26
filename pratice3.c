#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    char surname[100];

    printf("please input your name and surname:");
    scanf("%s %s",name,surname);
    printf("%s %s\n",name,surname);
    printf("%*d %*d\n",strlen(name),strlen(name),strlen(surname),strlen(surname));
    printf("%s %s\n",name,surname);
    printf("%-*d %-*d\n",strlen(name),strlen(name),strlen(surname),strlen(surname));
    return 0;
}