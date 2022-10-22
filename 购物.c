#include <stdio.h>
#define pi 3.14159
double distance(int,int);
int main(void)
{
    int X,L,Z,T;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d %d",&X,&L,&Z);
        if(360 == Z || 0 == Z)
        {
            printf("YES");
            continue;
        }
        if((5.0 * L) >= distance(X,Z))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

double distance(int radius,int angle)
{
    double total_distance,archway_length;
    
    if(angle <= 180)
        archway_length = (pi * radius * angle) / 180.0;
    else
        archway_length = (pi * radius * (360 - angle)) / 180.0;
    total_distance = 2 * archway_length;

    return total_distance;
}