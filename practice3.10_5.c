#include <stdio.h>
#include <math.h>
//3.10(5)����

int main(void)
{
    int a,b,c; //aΪ��λ������,bΪʮλ������,cΪ��λ������
    int number;

    scanf("%d",&number);
    a = number / 100;
    b = (number - a * 100) / 10;
    c = (number - a * 100) % 10;

    if(pow(a,3) + pow(b,3) + pow(c,3) == number)
        printf("�������ˮ�ɻ���.");
    else
        printf("���������ˮ�ɻ���.");

    return 0;
}