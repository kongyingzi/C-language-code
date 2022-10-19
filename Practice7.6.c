#include <stdio.h>
#include <string.h>

int main(void)
{
    int number = 0;
    int a = 0;
    char ch;
    char A[100];

    printf("Enter an strings:\n");
    while((ch = getchar()) != '#')
    {
        A[a] = ch;
        a++;
    }
    for(int i = 0;i < strlen(A);i++)
    {
        if(i > 0)
        {
            if('i' == A[i] && 'e' == A[(i-1)])
                number++;
        }
    }
    printf("the number of the strings \"ei\" is %d",number);

    return 0;
}