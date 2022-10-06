#include <stdio.h>
#include <math.h>
int main()
{
    int time;
    float sum_1,sum_2,formula_1,formula_2;
    scanf("%d",&time);
    while(time > 0)
    {
        sum_1 = sum_2 = 0;
        formula_1 = formula_2 = 1.0;
        while(time--)
        {
            sum_1 += 1.0 / formula_1;
            formula_1 ++;
        }
        printf("%f\n",sum_1);
        while(time--)
        {
            sum_2 += 1.0 / formula_2;
            formula_2 = (fabs(formula_2) + 0.1) * (-1);
        }
        printf("%f\n",sum_2);
        scanf("%d",&time);
    }
    return 0;
}