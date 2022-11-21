#include <stdio.h>
// µ—È7.2£®3£©
void main()
{
    int a[10] = {43,32,22,13,11,44,36,23,26,31};
    int i,j,x;

    for(i = 0;i < 9;i++)
        for(j = 0;j < 9 - i;j++)
            if(a[j] > a[j + 1])
            {
                x = a[j];
                a[j] = a[j + 1];
                a[j + 1] = x;
            }
    printf("≈≈–Ú∫Û:\n");
    for(i = 0;i < 10;i++)
        printf("%d ",a[i]);
}
