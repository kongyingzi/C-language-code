#include <stdio.h>
#include <ctype.h>
int myatoi(char *);
int main(void)
{
    char A[100];
    int number;

    scanf("%s",A);
    if(number = myatoi(A))
        printf("%d\n",number);
    else
        printf("Please enter ingeter!");

    return 0;
}
int myatoi(char * p)
{
    int i = 0;
    if(isdigit(*p) == 0)
        return 0;
    else
    {
        while(isdigit(*p))
        {
            switch(*p)
            {
                case '0':i = i * 10 + 0;break;
                case '1':i = i * 10 + 1;break;
                case '2':i = i * 10 + 2;break;
                case '3':i = i * 10 + 3;break;
                case '4':i = i * 10 + 4;break;
                case '5':i = i * 10 + 5;break;
                case '6':i = i * 10 + 6;break;
                case '7':i = i * 10 + 7;break;
                case '8':i = i * 10 + 8;break;
                case '9':i = i * 10 + 9;break;
            }
            p++;
        }
        return i;
    }
}