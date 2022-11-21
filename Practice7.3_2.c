#include <stdio.h>
//实验7.3（2）
#define CHOICES 10
#define FOLKS 100
int main(void)
{
    int i,elect_num,Candidate[CHOICES],Folks[FOLKS];

    for(i = 0;i < 10;i++)
        Candidate[i] = 0;
    printf("请输入%d人的投票情况:\n",FOLKS);
    i = 0;
    while(i < 100 && (scanf("%d",&Folks[i]) == 1))
        i++;
    elect_num = i;
    for(i = 0;i < elect_num;i++)
    {
        int choice = Folks[i];
        Candidate[choice - 1]++; 
    }
    for(i = 0;i < CHOICES;i++)
        printf("%d位候选人的票数为:%d\n",(i + 1),Candidate[i]);

    return 0;
}