#include <stdio.h>
#include <stdbool.h>
bool blessing_number(int);

int main(void)
{
    long L,R;

    scanf("%ld%ld",&L,&R);
    if(L <= R)
    {
        int n = 0;
        for(int i = L;i <= R;i++)
        {
            if(blessing_number(i))
            {
                printf("%d\n",i);
                n++;
            }
        }
        if(0 == n)
            printf("None\n");
    }
    
    return 0;
}

bool blessing_number(int input)
{
    bool judge = false;
    while(input > 0)
    {
        if(7 == input % 10)
        {
            judge = true;
            break;
        }
        input /= 10;
    }

    return judge;
}