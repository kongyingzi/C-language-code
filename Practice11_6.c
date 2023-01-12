#include <stdio.h>
int is_within(const char *,char);
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
    
    for(i = 0;i < 4;i++)
        if(is_within(A[i],'a'))
            printf("A[%d] -- YES!\n",i);

    return 0;
}
int is_within(const char * p,char a)
{
    while(*p != a && *p != '\0')
        p++;
    if(*p == a)
        return 1;
    else
        return 0;
}
