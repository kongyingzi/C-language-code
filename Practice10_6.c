#include <stdio.h>
void reverse(double []);
#define LEN 10
int main(void)
{
    double A[LEN];
    int i;

    printf("��Ϊ��������10��ʵ��:\n");
    for(i = 0;i < LEN;i++)
        scanf("%lf",&A[i]);
    reverse(A);
    printf("����������Ԫ��Ϊ:\n");
    for(i = 0;i < LEN;i++)
        printf("%.1f ",A[i]);
    
    return 0;
}
void reverse(double A[])
{
    int i;
    double t;

    for(i = 0;i <= LEN / 2 -1;i++)
    {
        t = A[i];
        A[i] = A[LEN - 1 - i];
        A[LEN - 1 - i] = t;
    }
}
