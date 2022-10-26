#include <stdio.h>
void larger_of(int *,int *);

int main(void)
{
    int x,y;

    scanf("%d%d",&x,&y);
    printf("The original integers of x and y are %d and %d\n",x,y);
    larger_of(&x,&y);

    printf("The latter integers of x and y are %d and %d\n",x,y);
    return 0;
}
void larger_of(int * x,int * y)
{
    int max;
    (*x >= *y) ? (max = *x) : (max = *y);
    *x = *y = max;
}