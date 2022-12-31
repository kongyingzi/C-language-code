#include <stdio.h>
#include <string.h>
char * Delete(char *,char *);
int main(void)
{
    char S[2];
    char S2[100];
    printf("请输入目标字符串：");
    gets(S2);
    printf("请输入要删除的字符：");
    gets(S);
    printf("%s\n",Delete(S2,S));

    return 0;
}
char * Delete(char * str,char * strGet)
{
    int hash[256] = {0};
    int i,currentletters = 0;

    if(NULL == strGet)
        return str;
    for(i = 0;i < strlen(strGet);i++)
        hash[strGet[i]] = 1;
    for(i = 0;i < strlen(str);i++)
        if(0 == hash[str[i]])
        {
            str[currentletters] = str[i];
            currentletters++;
        }
    str[currentletters] = '\0';

    return str;
}
