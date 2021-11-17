#include<iostream>
using namespace std;

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return sum(n-1)+n;
    }
    
    
}
int isum(int n)
{
    int s=0;
    int i;
   for(i=1; i<=n; i++){
         s=s+i;


   }
 return 0;
    
}
int main()
{
    int r;
    r = isum(5);
    cout<<r;
    return 0;
}