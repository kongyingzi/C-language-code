#include <stdio.h>
void ObtainStatic(char *);
int main(void)
{
    char A[100];
    
    ObtainStatic(A);
    puts(A);

    return 0;
}
void ObtainStatic(char * p)
{
    int n,i;

    printf("Please enter a letter for n:");
    scanf("%d",&n);
    getchar();
    for(i = 0;i < n;i++)
        scanf("%c",&p[i]);
    p[i] = '\0';
}