#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
      return 1;
    else
      return fact(n-1)*n;
    
}
int Ifact(int n)                           //alternate fun() in for loop
{
    int f=1;
    int i;
    for (i=1;i<=n;i++)
      f=f*i;
    return f;  
}
int main()
{
    int res;
    res = Ifact(5);
    cout<<res;
}