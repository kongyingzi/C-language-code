#include <stdio.h>
//ʵ��7.3��1��
#define AMOUNT 100
int main(void)
{
    int a[AMOUNT],b[AMOUNT],c[2 * AMOUNT];
    int n,m,i,j;
    int k;
    printf("����������aԪ�ظ���������bԪ�صĸ���:\n");
    scanf("%d%d",&n,&m);
    printf("����������a��Ԫ��:\n");
    for(i = 0;i < n;i++)
        scanf("%d",&a[i]);
    printf("����������b��Ԫ��:\n");
    for(j = 0;j < m;j++)
        scanf("%d",&b[j]);
    i = j = k = 0;
    while((i < n) || (j < m))
    {
        if(i != n && j != m)
        {
            if(a[i] < b[j])
                c[k] = a[i++];
            else
                c[k] = b[j++];
        }
        else if(i == n)
            c[k] = b[j++];
        else
            c[k] = a[i++];
        k++;
    }
    printf("a,b����ϲ��������cΪ:\n");
    for(i = 0;i < k;i++)
        printf("%d ",c[i]);
    return 0;
}