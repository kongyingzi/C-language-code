#include <stdio.h>
void to_base_n(int,int);

int main(void)
{
    int integer,stair;

    printf("请输入转化前的用十进制表示的数以及需要转换的进制数：\n");
    while((scanf("%d%d",&integer,&stair) == 2))
    {
        to_base_n(integer,stair);
        printf("\n请输入转化前的用十进制表示的数以及需要转换的进制数(或者q来停止):\n");
    }

    return 0;
}

void to_base_n(int input,int n)
{
    int r;

    r = input % n;
    if(input > 0)
    {
        to_base_n((input / n),n);
        if(r > 9)
            printf("%c",'a'+(r - 9));
        else
            printf("%d",r);
    }

}