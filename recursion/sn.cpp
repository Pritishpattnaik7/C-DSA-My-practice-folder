#include<iostream>
using namespace std;

int Isum(int n)
{
 int s=0,i;
 for(i=1;i<=n;i++)
 s=s+i;

 return s;
}
int main()
{
    int r;
    r = Isum(5);
    cout<<r;
}