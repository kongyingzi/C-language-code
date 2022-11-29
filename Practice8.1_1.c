#include <stdio.h>
//ÊµÑé8£¨1£©1.£¨1£©
void main()
{
    int i,j,*pi,*pj;

    pi = &i;
    pj = &j;
    i = 5;j = 7;
    printf("\n%d\t%d\t%d\t%d",i,j,pi,pj);
    printf("\n%d\t%d\t%d\t%d\n",&i,*&i,&j,*&j);
}