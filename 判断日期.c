#include <stdio.h>
#define DAYS 30

int main()
{
    int year,month,day;
    int bigmonth_number = 0;
    int totaldays = 0;
    int Bigmonth[7]={1,3,5,7,8,10,12};

    printf("Please enter year,month and day:");
    while(scanf("%d %d %d",&year,&month,&day) == 3)
    {
        if(month > 2)
        {
            for(int i = 0,bigmonth_number = 0;i <= 6;i++)
            {
                if(Bigmonth[i] < month)
                    bigmonth_number++;
                else
                    break;
            }
            totaldays = DAYS*(month - 1) + bigmonth_number + day - 1; //默认2月有29天
        }
        else 
        {
            if(month == 1)
                totaldays = day;
            else
                totaldays = DAYS + day;
        }
        printf("该日是%d年的第%d天.\n",year,totaldays);
        printf("Please enter next year,month and day(q to quit):");
    }
    return 0;
}
