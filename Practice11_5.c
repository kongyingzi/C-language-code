#include <stdio.h>
char * StrChar(char *,char);
int main(void)
{
    char * A[4] = 
    {
        "Kon Yin Zi",
        "YouBiBinJieYi",
        "Chao",
        "YouLiNaXu"
    };
    int i;
    char * p;

    for(i = 0; i < 4;i++)
    {
        if(p = StrChar(A[i],'o'))
            putchar(*p);
    }

    return 0;
}
char * StrChar(char * strings,char t)
{
    while(*strings != '\0')
    {
        if(*strings == t)
            return strings;
        strings++;
    }

    return NULL;
}