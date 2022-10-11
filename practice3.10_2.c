#include <stdio.h>
#include <math.h>
//3.10(2)的题

int main(void)
{
    float a,b,c,t,p,S;
    int i  = 0;
    printf("请输入三角形的三个边长：");
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
        printf("该三角形面积为: %f.\n",S);
    }
    else
        printf("不存在此类三角形.\n");
    
    return 0;
}