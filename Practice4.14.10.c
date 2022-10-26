#include <stdio.h>
#define HORSENUMBER 100
#define PRODUCT 100
//14(10)
int main(void)
{
    int method = 0;
    for(int bighorse = 0;bighorse <= 100;bighorse++)
    {
        for(int middlehorse = (HORSENUMBER - bighorse);middlehorse >= 0;middlehorse--)
        {
            int smallhorse = HORSENUMBER - bighorse - middlehorse;
            if(PRODUCT == (3 * bighorse + 2 * middlehorse + (smallhorse / 2.0) * 1))
                method++;
        }
    }
    printf("共有%d种驮法",method);

    return 0;
}