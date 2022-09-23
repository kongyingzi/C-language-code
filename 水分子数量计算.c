#include <stdio.h>

int main()
{
    long long KuaTuoNumber,WaterHeight,WaterNumber;
    scanf("%lld",&KuaTuoNumber);
    WaterHeight = KuaTuoNumber * 950;
    WaterNumber = WaterHeight / 3.0e-23;
    printf("The water's number is : %lld",WaterNumber);
    return 0;
}