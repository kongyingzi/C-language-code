#include <stdio.h>

int main()
{
    int max,min,sum;

    printf("Enter lower and upper integer limits: ");
    scanf("%d %d",&min,&max);
    while(min != max)
    {
        sum = 0;
        for(int a = min;a <= max;a++)
        {
            sum += (a * a);
        }
        printf("The sums of the squares from %d to %d is %d\n",min * min,max * max,sum);
        printf("Enter lower and upper integer limits: ");
        scanf("%d %d",&min,&max);
    }
    printf("Done\n");
    return 0;
}