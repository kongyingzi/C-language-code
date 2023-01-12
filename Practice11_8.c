#include <stdio.h>
char * string_in(char *,char*);
char * s_gets(char *,int);

int main(void)
{
    char A[1000],B[1000];
    char * p,*q;

    while((p = s_gets(A,1000)) && (q = s_gets(B,1000)))
    {
        q = string_in(A,B);
        if(q != NULL)
            puts(q);
    }

    return 0;
}
char * string_in(char * p1,char * q1)
{
    int i = 0,j = 0;

    while(*(p1 + i) != '\0' && *(q1 + j) != '\0')
        if(*(p1 + i) == *(q1 + j))
        {
            i++;
            j++;
        }
        else
        {
            i++;
            j = 0;
        }
    if(*(q1 + j) == '\0')
        return ((p1 + i) - j);
    else
        return NULL;
}
char * s_gets(char * p2,int number)
{
    char * q2;

    q2 = fgets(p2,number,stdin);
    if(q2 != NULL)
    {
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