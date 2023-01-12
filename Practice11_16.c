#include <stdio.h>
#include <string.h>
#include <ctype.h>
char * s_gets(char *,int);
int main(int argc,char * argv[])
{
    char A[1000];
    char * p;
    while((p = s_gets(A,1000)) == NULL)
        continue;
    if(argc == 1 || strcmp(argv[1],"-p") == 0)
        puts(A);
    else if(strcmp(argv[1],"-u") == 0)
    {
        while(*p != '\0')
        {
            if(isalpha(*p))
                *p = toupper(*p);
            p++;
        }
        puts(A);
    }
    else if(strcmp(argv[1],"-l") == 0)
    {
        while(*p != '\0')
        {
            if(isalpha(*p))
                *p = tolower(*p);
            p++;
        }
        puts(A);
    }

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