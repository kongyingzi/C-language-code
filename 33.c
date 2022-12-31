#include <stdio.h>
#include <string.h>

void reverse(char* s)
{
    // 获取字符串长度
    int len = strlen(s);

    // 交换 ...
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
    printf("请输入目标字符串(不多于100个字符):");
    gets(s);
    printf("'%s' =>\n", s);
    reverse(s);           // 反转字符串
    printf("'%s'\n", s);
    return 0;
}