#include <stdio.h>
#define FOUDATION_1 8.75
#define FOUDATION_2 9.33
#define FOUDATION_3 10.00
#define FOUDATION_4 11.20
#define ELEMENTARY_TIME 40
#define OVERTIME_SALARY (1.5 * work_salary)
#define TAX1 300
#define TAX1_INDEX 0.15
#define TAX2 450
#define TAX2_INDEX 0.20
#define EXTRE_INDEX 0.25

int main(void)
{
    float work_salary,total_salary,total_tax,own_money;
    int worktime;
    int choose;

    printf("Enter the number corresponding to the desird pay rate or action:\n");
    printf("%-40s %-40s\n%-40s %-40s\n%-40s\n","(1)$8.75/hr","(2)$9.33/hr","(3)$10.00/hr","(4)$11.20/hr","(5)quit");
    while((scanf("%d",&choose) == 1))
    {
        if(choose < 1 || choose > 5)
        {
            printf("Please enter a correct number(1~5):\n");
            printf("Enter the number corresponding to the desird pay rate or action:\n");
            printf("%-40s %-40s\n%-40s %-40s\n%-40s\n","(1)$8.75/hr","(2)$9.33/hr","(3)$10.00/hr","(4)$11.20/hr","(5)quit");
            continue;
        }

        switch(choose)
        {
            case 1:
                work_salary = 8.75;
                break;
            case 2:
                work_salary = 9.33;
                break;
            case 3:
                work_salary = 10.00;
                break;
            case 4:
                work_salary = 11.20;
                break;
            case 5:
                goto a;
        }

        printf("Enter your total work time(>=0):");
        scanf("%d",&worktime);

        if(worktime <= ELEMENTARY_TIME)
        {
            total_salary = work_salary * worktime;
        }
        else
        {
            total_salary = ELEMENTARY_TIME * work_salary + (worktime - ELEMENTARY_TIME) * OVERTIME_SALARY;
        }
        if(total_salary <= TAX1)
            total_tax = total_salary * TAX1_INDEX;
        else if(total_salary > TAX1 && total_salary <= TAX2)
            total_tax = TAX1 * TAX1_INDEX + (total_salary - TAX1) * TAX2_INDEX;
        else
            total_tax = TAX1 *TAX1_INDEX + (TAX2 - TAX1) * TAX2_INDEX + (total_salary - TAX2) * EXTRE_INDEX;

        own_money = total_salary - total_tax;
        printf("工资总额为:%.2f\n税金为:%.2f\n净收入为:%.2f\n"
        ,total_salary,total_tax,own_money);

        printf("Enter the number corresponding to the desird pay rate or action:\n");
        printf("%-40s %-40s\n%-40s %-40s\n%-40s\n","(1)$8.75/hr","(2)$9.33/hr","(3)$10.00/hr","(4)$11.20/hr","(5)quit");
    }
    a:;
    return 0;
}