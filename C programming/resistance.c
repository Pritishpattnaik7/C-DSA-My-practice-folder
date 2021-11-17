#include <stdio.h>
int main()
{
    float r1,r2,r3,voltage;
    float rs,rp,is,ip,t;
    printf("enter the value of 3 resistances : ");
    scanf("%f %f %f",&r1,&r2,&r3);
    rs = r1 + r2 + r3;
    t = 1/r1 + 1/r2 + 1/r3;
    rp = 1/t;
    
    printf("the resistance in series is : %f\n",rs);
    printf("the resistance in parallel is : %f\n",rp);
   
    return 0;
}