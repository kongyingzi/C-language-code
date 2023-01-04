#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define PAPERNUM 6
struct queue
{
    char name[20];
    int data[1000];
    int head;
    int tail;
};
struct stack
{
    int data[10];
    int top;
};
void Operate(struct queue *,struct stack *,int []);
void AnnunceWinner(const struct queue *,const struct stack *);
int ObtainStatic(int [],int);
void Delete(char *);
int main(void)
{
    char * p;
    struct queue q1,q2;
    struct stack s;
    int book[10] = {0};
    int i,t,session = 0;
    
    q1.head = 1;
    q1.tail = 1;
    printf("请输入第一位玩家名称:");
    fgets(q1.name,20,stdin);
    Delete(q1.name);
    q2.head = 1;
    q2.tail = 1;
    printf("请输入第二位玩家名称:");
    fgets(q2.name,20,stdin);
    Delete(q2.name);
    s.top = 0;
    
    printf("请输入%s的手牌,共%d张:\n",q1.name,PAPERNUM);
    q1.tail = ObtainStatic(q1.data,PAPERNUM) + 1;
    printf("请输入%s的手牌,共%d张:\n",q2.name,PAPERNUM);
    q2.tail = ObtainStatic(q2.data,PAPERNUM) + 1;
    
    printf("现在游戏开始(一共进行回合数不超过100回合)!\n");
    while(q1.head < q1.tail && q2.head < q2.tail && session <= 100)
    {
        Operate(&q1,&s,book);
        Operate(&q2,&s,book);
        session++;
    }
    
    if(q2.head == q2.tail)
        AnnunceWinner(&q1,&s);
    else if(q1.head == q1.tail)
        AnnunceWinner(&q2,&s);
    else
        printf("%s与%S打成平局\n",q1.name,q2.name);
        
    system ("pause");
    return 0;
}
void Operate(struct queue * p1,struct stack * p2,int A[])
{
    int t;
    
    t = (p1->data)[p1->head];
    if(A[t] == 0)
    {
        (p1->head)++;
        (p2->top)++;
        (p2->data)[p2->top] = t;
        A[t] = 1;
    }
    else
    {
        (p1->head)++;
        (p1->data)[p1->tail] = t;
        (p1->tail)++;
        while((p2->data)[p2->top] != t)
        {
            A[(p2->data)[p2->top]] = 0;
            (p1->data)[p1->tail] = (p2->data)[p2->top];
            (p1->tail)++;
            (p2->top)--;
        }
    }
}
void AnnunceWinner(const struct queue * p1,const struct stack * p2)
{
    int i;
    
    printf("%s win\n",p1->name);
    printf("%s当前手牌是:\n",p1->name);
    for(i = (p1->head);i <= (p1->tail) - 1;i++)
        printf("%d ",(p1->data)[i]);
    if((p2->top) > 0)
    {
        printf("\n桌上的手牌是\n");
        for(i = 1;i <= (p2->top);i++)
            printf("%d ",(p2->data)[i]);
    }
    else
        printf("\n桌上已经没有牌了\n");
}
int ObtainStatic(int A[],int len)
{
    int num = 0,t;

    while(num < len)
        if(scanf("%d",&t) == 1)
            if(t >= 1 && t <= 9)
            {
                A[num + 1] = t;
                num++;
            }
            else
                printf("请输入1~9的数字\n");
        else
            printf("请输入数字！\n");

    return num;
}
void Delete(char * p)
{
    char * i;
    
    i = strchr(p,'\n');
    *i = '\0';
}