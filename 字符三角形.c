#include <stdio.h>

int main()
{
    int n,number,i;//nΪֱ�������εĸ߶ȣ�numberΪÿ���ַ�����,i���ڴ�ӡ�ַ�
    char a;//aΪ����ֱ�������ε��ַ�

    scanf("%c %d",&a,&n);
    for(number=1;number<=n;number++)
    {
        for(i=1;i<=number;i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
