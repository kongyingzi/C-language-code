#include <stdio.h>
//สตั้7.1ฃจ6ฃฉ
int fm(int a[],int n)
{
    int i,m = a[0];

    for(i = 1;i < n;i++)
        if(m < a[i])
            m = a[i];

    return m;
}
void main()
{
    int x[10] = {5,12,31,24,53,46,37,68,9,10},t;

    t = fm(x,7);
    printf("%d\n",t);
}