#include <stdio.h>
#define START 100
#define END 999
void daffodil_number(int);
//14(3)
int main(void)
{
    printf("水仙花数有：\n");
    for(int i = START;i <= END;i++)
    {
        daffodil_number(i);
    }
    
    return 0;
}
void daffodil_number(int input)
{
    int hundred,decade,single,sum;
    int initial = input;

    single = input % 10;
    input /= 10;
    decade = input % 10;
    input /= 10;
    hundred = input % 10;
    sum = hundred * hundred * hundred + decade * decade * decade + single * single * single;
    if(sum == initial)
        printf("%d ",initial);
}