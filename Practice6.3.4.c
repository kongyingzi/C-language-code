#include <stdio.h>
#define NEED 40 //NEED��ʾ���ҳ���Ԫ���������ж�Ӧ������
//ʵ��6.3��4��
int main(void)
{
    int a[100],i,j,sum = 0;

    for(j = 1;sum < 100;j += 2)
    {
        i = sum;
        sum += j;
        for(;i < sum;i++)
            a[i] = j;
    }
    printf("a�������ĵ�%d�����Ϊ:%d\n",NEED,a[NEED - 1]);

    return 0;
}