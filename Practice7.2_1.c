#include <stdio.h>
//ʵ��7.2��1��
void main()
{
    char s1[81],s2[81];
    int i,s;

    printf("�������ַ���1:");
    gets(s1);
    printf("�������ַ���2:");
    gets(s2);
    i = 0;
    while((s1[i] == s2[i]) && (s1 != '\0'))
        i++;
    s = s1[i] - s2[i];
    printf("%d\n",s);
}