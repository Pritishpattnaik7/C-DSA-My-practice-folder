#include <stdio.h>

int main()
{
    float x1,y1,x2,y2,m;
    printf("enter x1 and y1 : ");
    scanf("%f %f",&x1,&y1);
    printf("enter x2 and y2 : ");
    scanf("%f %f",&x2,&y2);
    m = (y2 - y1) / (x2 - x1);
    printf("the required slope is : %f",m);
    return 0;
}