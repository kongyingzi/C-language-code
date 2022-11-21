#include <stdio.h>
//实验7.2（4）
void main()
{
    int a[10] = {43,32,22,13,11,44,36,23,26,31};
    int i,x;
    for(i = 0;i < 10;i++)
        printf("%d ",a[i]);
    printf("\n输入要删除的数:");
    scanf("%d",&x);
    for(i = 0;i < 9;i++)
        if(a[i] == x)
            break;
    while(i < 9)
    {
        a[i] = a[i + 1];
        i++;
    }
    printf("删除后:\n");
    for(i = 0;i < 9;i++)
        printf("%d ",a[i]);
}