#include <stdio.h>
//ÊµÑé8£¨1£©1.£¨3£©
void main()
{
    int x = 3,y = 5,z = 2,* px,* py,* pz,* pm;
    px = &x;py = &y;pz = &z;
    pm = px;
    if(*px < *py) pm = py;
    if(*pm < *pz) pm = pz;
    printf("%d\n",*pm);
}