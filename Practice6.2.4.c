#include <stdio.h>
//实验6.2（4）
void main()
{
    float x[100],s = 0,ave,a;
    int n = 0,i;

    printf("输入成绩:");
    while(n < 100)
    {
        scanf("%f",&a);
        if(a < 0)
            break;
        s = s + a;
        x[n] = a;
        n++;
    }
    ave = s / n;
    printf("输出\n");
    printf("平均分 = %f\n",ave);
    for(i = 0;i < n;i++)
        if(x[i] < ave)
            printf("%.0f ",x[i]);
}