#include <stdio.h>
void ComparableNumber(int);
//14(2)
int main(void)
{
    int n;

    scanf("%d",&n);
    ComparableNumber(n);

    return 0;
}
void ComparableNumber(int input)
{
    while(input > 0)
    {
        printf("%d",(input % 10));
        input /= 10;
    }
}