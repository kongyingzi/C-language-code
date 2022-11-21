#include <stdio.h>
//สตั้7.1ฃจ3ฃฉ
void main(void)
{
    char s[80],c1,c2;
    int i = 0,n = 0;
    
    gets(s);
    while(s[i] != '\0')
    {
        c1 = s[i];
        if(i == 0)
            c2 = ' ';
        else
            c2 = s[i - 1];
        if(c2 == ' '&& c1 != ' ')
            n++;
        i++;
    }
    printf("n = %d\n",n);
}
