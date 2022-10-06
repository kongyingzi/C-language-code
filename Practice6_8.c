#include <stdio.h>

int main()
{
    float a,b;
    while(scanf("%f %f",&a,&b))
    {
        printf("%f",(a-b)/(a*b));
    }
    printf("Bye!");
    return 0;
}