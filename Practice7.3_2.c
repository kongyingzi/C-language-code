#include <stdio.h>
//ʵ��7.3��2��
#define CHOICES 10
#define FOLKS 100
int main(void)
{
    int i,elect_num,Candidate[CHOICES],Folks[FOLKS];

    for(i = 0;i < 10;i++)
        Candidate[i] = 0;
    printf("������%d�˵�ͶƱ���:\n",FOLKS);
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
        printf("%dλ��ѡ�˵�Ʊ��Ϊ:%d\n",(i + 1),Candidate[i]);

    return 0;
}