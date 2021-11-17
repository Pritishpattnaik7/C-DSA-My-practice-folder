#include <iostream>
using namespace std;

int fib(int n)                            //itertative function
{
    int t0=0,t1=1,s;
    if (n<=1)
      return n;
    for (int i=2; i<=n ; i++)
    {
        s = t0+t1;
        t0 = t1;
        t1 = s;
    } 
    return s; 
}

int rfib(int n)                        //recursive function  o(2^n)
{
    if (n<=1)
      return n;
    return rfib(n-2) + rfib(n-1);  
}

int f[10];

int memofib(int n)                    //memoization o(n) reduces the time complexity
{
    if (n<=1)
    {
        f[n] = n;
        return n;
    }
    else
    {
        if (f[n-2] == -1)
          f[n-2] = memofib(n-2);
        if (f[n-1] == -1)
          f[n-1] = memofib(n-1);

        return f[n-2] + f[n-1];    
    }
    
}
int main()
{
    for (int i=0 ; i<=10 ; i++)
      f[i]=-1;
    cout<<rfib(7);
    return 0;
}