#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int Book[11];
int main(void)
{
    int i,interget;

    srand((unsigned int)time(0));
    for(i = 0;i < 1000;i++)
    {
        interget = rand() % 10 + 1;
        Book[interget]++;
    }
    for(i = 1;i <= 10;i++)
        printf("%d出现了%d次\n",i,Book[i]);

    return 0;
}