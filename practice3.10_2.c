#include <stdio.h>
#include <math.h>
//3.10(2)����

int main(void)
{
    float a,b,c,t,p,S;
    int i  = 0;
    printf("�����������ε������߳���");
    scanf("%f %f %f",&a,&b,&c);
    if(a < b)
        {t = a;a = b;b = t;}
    if(a < c)
        {t = a;a = c;c = t;}
    if(b < c)
        {t = b;b = c;c = t;}
    if((b+c) > a && (a - b) < c)
    {
        p = (a + b + c) / 2;
        S = sqrt(p * (p - a) * (p - b) * (p - c));
        printf("�����������Ϊ: %f.\n",S);
    }
    else
        printf("�����ڴ���������.\n");
    
    return 0;
}