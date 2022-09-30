#include <stdio.h>

int main()
{
    float height;
    scanf("%f",&height);
    while(height > 0)
    {
        printf("Enter a height in centimeters: %.1f\n",height);
        printf("%.1f cm = 5 feet, %.1f inches",height,(height/2.54));
        scanf("%f",&height);
    }
    if(height <= 0)
    {
        printf("Enter a height in centimeters:\n");
        printf("bye");
    }
    return 0;
}