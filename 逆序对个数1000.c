#include <stdio.h>

int main(void)
{
    int A[1000];
    int inversable_teamnumber = 0;
    int n;

    scanf("%d",&n);
    for(int i = 0;i < n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(int a = 0;a < n;a++)
    {
        for(int i = 0;i < a;i++)
        {
            if(A[i] > A[a])
                inversable_teamnumber++;
        }
    }
    printf("%d",inversable_teamnumber);

    return 0;
}