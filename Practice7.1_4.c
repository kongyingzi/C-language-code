#include <stdio.h>
//สตั้7.1ฃจ4ฃฉ
void func(int b[]);

void main()
{
    int a[] = {5,6,7,8},i;
    
    func(a);
    for(i = 0;i < 4;i++)
        printf("%d ",a[i]);
}
void func(int b[])
{
    int j;

    for(j = 0;j < 4;j++)
        b[j] = j;
}