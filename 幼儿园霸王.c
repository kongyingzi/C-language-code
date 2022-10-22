#include <stdio.h>
#include <string.h>
#include <limits.h>
int main(void)
{
    int n,length,width,high;
    int max = INT_MIN;
    int min = INT_MAX;
    char max_name[9];
    char min_name[9];
    char name[9];

    scanf("%d",&n);
    while(n--)
    {
        int volumn;
        scanf("%d%d%d%s\n",&length,&width,&high,name);
        volumn = length * width * high;
        if(volumn > max)
        {
            max = volumn;
            strcpy(max_name,name);
        }
        if(volumn < min)
        {
            min = volumn;
            strcpy(min_name,name);
        }
    }
    printf("%s %s",max_name,min_name);

    return 0;
}