#include <stdio.h>
#include <stdbool.h>
bool blessing_number(int);

int main(void)
{
    int n;

    scanf("%d",&n);
    if(blessing_number(n))
        printf("Yes\n");
    else
        printf("No\n");
    
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