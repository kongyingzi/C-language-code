#include <stdio.h>
char * mystrncpy(char *,char *,int);
int main(void)
{
    char A[100],B[100];
    char * p;
    int n;

    while(p = fgets(B,100,stdin))
    {
        while(*p != '\n' && *p != '\0')
            p++;
        if(*p == '\n')
            *p = '\0';
        else
            while(getchar() != '\n')
                continue;
        printf("Please enter the number of char copyed:");
        scanf("%d",&n);
        getchar();
        mystrncpy(A,B,n);
    }
    printf("³ÌÐò½áÊø£¡");

    return 0;
}
char * mystrncpy(char * p,char * q,int number)
{
    int i = 0;

    while(*(q + i) && i <= number)
    {
        *(p + i) = *(q + i);
        i++;
    }
    if(i <= number)
        *(p + i) = '\0';
    
    return p;
}