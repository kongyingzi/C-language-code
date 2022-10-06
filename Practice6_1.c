#include <stdio.h>

int main()
{
    int i;
    char A[26];
    printf("These words are as follows:\n");
    for(char word = 'a',i = 0;word <= 'z',i <= 25;word++,i++)
    {
        A[i] = word;
    }
    for(int i = 0;i <= 25;i++)
    {
        printf(" %c\n",A[i]);
    }
    return 0;
}