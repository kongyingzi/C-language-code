#include <stdio.h>
void to_base_n(int,int);

int main(void)
{
    int integer,stair;

    printf("������ת��ǰ����ʮ���Ʊ�ʾ�����Լ���Ҫת���Ľ�������\n");
    while((scanf("%d%d",&integer,&stair) == 2))
    {
        to_base_n(integer,stair);
        printf("\n������ת��ǰ����ʮ���Ʊ�ʾ�����Լ���Ҫת���Ľ�����(����q��ֹͣ):\n");
    }

    return 0;
}

void to_base_n(int input,int n)
{
    int r;

    r = input % n;
    if(input > 0)
    {
        to_base_n((input / n),n);
        if(r > 9)
            printf("%c",'a'+(r - 9));
        else
            printf("%d",r);
    }

}