#include <stdio.h>
int Max(const int []);
#define LEN 10
int main(void)
{
    int A[LEN],i;

    printf("�����������е�Ԫ��:\n");
    for(i = 0;i < LEN;i++)
        scanf("%d",&A[i]);
    printf("�����������ֵΪ:%d\n",Max(A));

    return 0;
}
int Max(const int A[])
{
    int max = A[0],i,t;
    
    for(i = 1;i < LEN;i++)
        if(max < A[i])
            max = A[i];
    
    return max;
}