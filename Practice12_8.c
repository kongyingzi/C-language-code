#include <stdio.h>
#include <stdlib.h>
int * make_array(int,int);
void show_array(const int [],int);
int main(void)
{
    int * pa;
    int size;
    int value;

    printf("Enter the number of elements: ");
    while(scanf("%d",&size) == 1 && size > 0)
    {
        printf("Enter the initialization value: ");
        scanf("%d",&value);
        pa = make_array(size,value);
        if(pa)
        {
            show_array(pa,size);
            free(pa);
        }
        printf("Enter the number of elements (<1 to quiz): ");
    }
    printf("Done.\n");

    return 0;
}
int * make_array(int elem,int val)
{
    int * p;
    int i;

    p = (int *)malloc(elem * sizeof(int));
    for(i = 0;i < elem;i++)
        *(p + i) = val;
    
    return p;
}
void show_array(const int ar[],int n)
{
    int i;

    for(i = 0;i < n;i++)
    {
        printf("%d ",ar[i]);
        if(i % 8 == 0 && i != 0)
            printf("\n");
    }
    if(i % 8)
        printf("\n");
}