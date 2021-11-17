#include <stdio.h>

void fib(int m , int n)
{
    int t1=m;
    int t2=m+1;
    int nextterm;

     for (int i=1 ; i<=n ; i++)
     {
         printf("%d ",t1);
         nextterm = t1 + t2;
         t1 = t2;
         t2 = nextterm;
     }
     printf("%d",n);
     return;
}

int main()
{
    int m1 , n1;
    int result = 0;
    printf("enter the mth and nth number : ");
    scanf("%d %d",&m1 , &n1);

    fib(m1 , n1);
    return 0;
}