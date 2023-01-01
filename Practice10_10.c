#include <stdio.h>
void Sum(const int [],const int [],int [],int);
int main(void)
{
    int A[4] = {2,4,5,8};
    int B[4] = {1,0,4,6};
    int C[4];

    Sum(A,B,C,4);
    printf("Cสýื้ฮช:\n");
    for(int i = 0;i < 4;i++)
        printf("%d ",C[i]);
    
    return 0;
}
void Sum(const int element1[],const int element2[],int target[],int len)
{
    int i;
    
    for(i = 0;i < len;i++)
        target[i] = element1[i] + element2[i];
}