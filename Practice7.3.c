#include <stdio.h>

int main(void)
{
    int number;
    int even_number = 0;
    int odd_number = 0;
    int even_number_sum = 0;
    int odd_number_sum = 0;

    while((scanf("%d",&number) == 1))
    {
        if(0 == number)
            break;
        else if(number % 2 == 0)
        {
            even_number++;
            even_number_sum += number;
        }
        else
        {
            odd_number++;
            odd_number_sum += number;
        }
    }
    printf("ż���ĸ���Ϊ%d,ż����ƽ��ֵΪ%.2f\n�����ĸ���Ϊ%d,������ƽ��ֵΪ%.2f"
    ,even_number,((float)even_number_sum / even_number),odd_number,((float)odd_number_sum / odd_number));

    return 0;
}