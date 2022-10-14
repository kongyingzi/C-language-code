#include <stdio.h>
#define foudation_salary 10.0
#define need_work 40
#define odd_salary 15
#define line1 300
#define line1_index 0.15
#define line2 450
#define line2_index 0.20
#define extre_index 0.25

int main(void)
{
    float work_hour,total_salary,tax,own_money;

    scanf("%f",&work_hour);
    if( work_hour <= need_work)
        total_salary = work_hour * foudation_salary;
    else
        total_salary = foudation_salary * need_work + (work_hour - need_work) * odd_salary;
    if(total_salary <= line1)
    {
        tax = total_salary * line1_index;
        own_money = total_salary - tax;
    }
    else if(total_salary > line1 && total_salary <= line2)
    {
        tax = line1_index * line1 + (total_salary - line1) * line2_index;
        own_money = total_salary - tax;
    }
    else
    {
        tax = line1_index * line1 + line2_index * (line2 - line1) + (total_salary - line2) * extre_index;
        own_money = total_salary - tax;
    }
    printf("工资总额为:%.2f$,税金为:%.2f$,净收入为:%.2f$"
    ,total_salary,tax,own_money);

    return 0;
}