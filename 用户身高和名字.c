#include <stdio.h>

int main()
{
    char name[100];
    float height;
    printf("Please input your name and height:");
    scanf("%s %f",name,&height);
    printf("%s,you are %.3f feet tall.",name,height);
    return 0;
}