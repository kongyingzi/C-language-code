#include <stdio.h>
#include <ctype.h>
void ObtainWord(char *);
int main(void)
{
    char A[50];

    ObtainWord(A);
    printf("%s",A);

    return 0;
}
void ObtainWord(char * p)
{
    int i = 0;
    char t;

    printf("Please enter a word:");
    scanf("%c",&t);
    while(!isspace(t))
    {
        p[i] = t;
        i++;
        scanf("%c",&t);
    }
    p[i] = '\0';
}