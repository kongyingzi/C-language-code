#include <stdio.h>
//ʵ��7.1��1��
void main()
{
    char a[] = "ab12cd34ef";
    int i,j;

    for(i = j = 0;a[i];i++)
        if(a[i] >= 'a' && a[i] <= 'z')
            a[j++] = a[i];
    a[j] = '\0';
    printf("%s\n",a);
}