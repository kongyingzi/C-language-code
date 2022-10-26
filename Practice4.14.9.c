#include <stdio.h>
#include <math.h>
#define COMPARE_NUMBER 8.0
//14(9)
int main(void)
{
    int min = 0;
    float s = 0;

    for(int n = 1;;n++)
    {
        float former = s;
        s += 1.0 / n;
        if(n > 2)
        {
            if(fabs(s - COMPARE_NUMBER) > fabs(former - COMPARE_NUMBER))
            {
                printf("s is %.5f and n is %d",former,(n-1));
                break;
            }
        }
    }

    return 0;
}

