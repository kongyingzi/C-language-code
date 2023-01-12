#include <stdio.h>
#include <ctype.h>
void ObtainWord(char *,int);
int main(void)
{
    char A[50];

    ObtainWord(A,20);
    printf("%s",A);

    return 0;
}
void ObtainWord(char * p,int len)
{
    int i = 0,num = 0;
    char t;

    printf("Please enter a word:");
    scanf("%c",&t);
    while(!isspace(t) && num < len)
    {
        p[i] = t;
        i++;
        num++;
        scanf("%c",&t);
    }
    p[i] = '\0';
}