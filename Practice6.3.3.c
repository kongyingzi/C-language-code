#include <stdio.h>
//ʵ��6.3(3)
int main(void)
{
    int a,num,n,max;//a�Ƕ�ȡ������n���ڼ�¼��ȡ�����ĸ�����num��¼�Ǹ������ĸ���

    n = num = max = 0;
    while(n < 20)
    {
        scanf("%d",&a);
        if(a > 0)
        {
            num++;
            if(max < a)
                max = a;
        }
        n++;
    }
    printf("�Ǹ��������ĸ���Ϊ%d,����������%d",num,max);

    return 0;
}