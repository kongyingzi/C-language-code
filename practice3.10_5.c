#include <stdio.h>
#include <math.h>
//3.10(5)的题

int main(void)
{
    int a,b,c; //a为百位的数字,b为十位的数字,c为个位的数字
    int number;

    scanf("%d",&number);
    a = number / 100;
    b = (number - a * 100) / 10;
    c = (number - a * 100) % 10;

    if(pow(a,3) + pow(b,3) + pow(c,3) == number)
        printf("这个数是水仙花数.");
    else
        printf("这个数不是水仙花数.");

    return 0;
}