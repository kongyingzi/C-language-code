#include <stdio.h>
int A[1000],n;
void QuickSort(int,int);
int main(void)
{
    int i,num  = 0;

    scanf("%d",&n);
    for(i = 1;i <= n;i++)
        scanf("%d",&A[i]);
    QuickSort(1,n);
    for(i = 2;i <= n + 1;i++)
        if(A[i - 1] != A[i])
            num++;
    printf("%d\n",num);
    for(i = 2; i <= n + 1;i++)
        if(A[i - 1] != A[i])
            printf("%d ",A[i - 1]);
    
    return 0;
}
void QuickSort(int left,int right)
{
    int i,j,temp,t;
    if(left > right)
        return;
    temp = A[left];
    i = left;
    j = right;
    while(i != j)
    {
        while(i < j && A[j] >= temp)
            j--;
        while(i < j && A[i] <= temp)
            i++;
        if(i < j)
        {
            t = A[i];
            A[i] = A[j];
            A[j] = t;
        }
    }
    A[left] = A[i];
    A[i] = temp;
    QuickSort(left,i - 1);
    QuickSort(i + 1,right);
}