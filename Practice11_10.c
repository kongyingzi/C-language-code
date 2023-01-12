#include <stdio.h>
#include <string.h>
void DeleteSpace(char *);
char * s_gets(char *,int);
int main(void)
{
    char A[1001];

    while(s_gets(A,1000))
    {
        DeleteSpace(A);
        puts(A);
    }

    return 0;
}
void DeleteSpace(char * p)
{
    char * q;
    q = p;
    while(q = strchr(q,' '))
        q = strcpy(q,q + 1);
}
char * s_gets(char * p2,int number)
{
    char * q2;

    q2 = fgets(p2,number,stdin);
    if(q2 != NULL)
    {
        if(*q2 == '\n')
            return NULL;
        while(*p2 != '\n' && *p2 != '\0')
            p2++;
        if(*p2 == '\n')
            *p2 = '\0';
        else
            while(getchar() != '\n')
                continue;
        
        return q2;
    }
    else
        return NULL;
}
