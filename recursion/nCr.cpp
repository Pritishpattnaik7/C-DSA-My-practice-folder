#include <iostream>
using namespace std;

int fact(int n)
{
    if (n==0)
      return 1;
    return fact(n-1)*n;  
}

int ncr(int n, int r)
{
    int num,den;

    num = fact(n);
    den = fact(n-r)*fact(r);
    return num/den;
}

int NCR(int n, int r)                         //recursive function
{
    if (n==r || r==0)
      return 1;
    return NCR(n-1,r-1) + NCR(n-1,r);  
}
int main()
{
    cout<<NCR(4,2);
    return 0;
}