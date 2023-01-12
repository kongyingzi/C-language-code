#include <stdio.h>
void Instead(char *);
char * s_gets(char *,int);
int main(void)
{
    char A[1001];

    while(s_gets(A,1000))
    {
        Instead(A);
        puts(A);
    }

    return 0;
}
void Instead(char * p)
{
    int number = 0,i;
    char t;

    while(*(p + number) != '\0')
        number++;
    for(i = 0;i <= number / 2 - 1;i++)
    {
        char t = *(p + i);
        *(p + i) = *(p + number -1 - i);
        *(p + number - 1 - i) = t;
    }
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