#include <stdio.h>
#include <string.h>

void reverse(char* s)
{
    // ��ȡ�ַ�������
    int len = strlen(s);

    // ���� ...
    int i = 0;
    char c;
    while (i <= len / 2 - 1)
    {
        c = *(s + i);
        *(s + i) = *(s + len - 1 - i);
        *(s + len - 1 - i) = c;
        i++;
    }
}

int main()
{
    char s[101];
    printf("������Ŀ���ַ���(������100���ַ�):");
    gets(s);
    printf("'%s' =>\n", s);
    reverse(s);           // ��ת�ַ���
    printf("'%s'\n", s);
    return 0;
}