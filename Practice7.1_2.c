#include <stdio.h>
//实验7.1（2）
void main(void)
{
    char s1[81],s2[81];
    int m = 0,n = 0;

    printf("输入字符串s1和s2:");
    gets(s1);
    gets(s2);
    while(s1[m] != '\0')
        m++;
    while(s2[n])
    {
        s1[m] = s2[n];
        m++;
        n++;
    }
    printf("%d\n",m);
}