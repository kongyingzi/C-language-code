#include <stdio.h>
//สตั้7.2ฃจ2ฃฉ
void main()
{
    char a[] = "abdgikm",b[] = "cefhjlnop",c[81];
    int i = 0,j = 0,k = 0;

    while(a[i] != '\0' && b[j] != '\0')
    {
        if(a[i] < b[j])
            c[k] = a[i++];
        else
            c[k] = b[j++];
        k++;
    }
    a[k] = '\0';
    printf("%s\n",c);
}