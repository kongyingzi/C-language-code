#include <stdio.h>
//ʵ��7.1��5��
int chg(int k[],int n)
{
    int i,s = 0;

    for(i = 0;i < n;i++)
        s = s + k[i];
    
    return s;
}
void main()
{
    int x[10] = {1,2,3,4,5,6,7,8,9,10},s = 0;
    s = chg(x,5);
    printf("%d\n",s);
}