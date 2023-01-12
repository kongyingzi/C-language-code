#include <stdio.h>
#include <ctype.h>
char * s_gets(char *,int);
int main(void)
{
    char A[1000];
    int word = 0,capital = 0,smallletter = 0,punctuation = 0,number = 0;
    char *p,*q;

    if(p = s_gets(A,1000))
    {
        q = p;
        while(*q != '\0')
        {
            while(*q == ' ' && *q != '\0')
                q++;
            while(isalpha(*q) && *q != '\0')
                q++;
            word++;
            q++;
        }
        while(*p != '\0')
        {
            if(isupper(*p))
                capital++;
            else if(islower(*p))
                smallletter++;
            else if(ispunct(*p))
                punctuation++;
            else if(isdigit(*p))
                number++;
            p++;
        }
    }
    printf("word = %d,capital = %d, smallletter = %d,\npunctuation = %d, number = %d"
    ,word,capital,smallletter,punctuation,number);

    return 0;
}
char * s_gets(char * p,int length)
{
    char * q;

    q = fgets(p,length,stdin);
    if(q)
    {
        while(*p != '\n' && *p != '\0')
            p++;
        if(*p == '\n')
            *p = '\0';
        else
        {
            while(getchar() != '\n')
                continue;
        }

        return q;
    }
    else
        return NULL;
}