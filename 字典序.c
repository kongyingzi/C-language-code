#include <stdio.h>
#include <string.h>

int main()
{
    char A[100];
    char B[100];

    scanf("%s %s",A,B);
    (strlen(A)<strlen(B)) ? printf("YES") : printf("NO");
    return 0;
}
