#include <iostream>
using namespace std;

int fact(int num)
{
   int factorial = 1;
   for (int i=2 ; i<=num ; i++)
   {
       factorial*=i;
   }
   return factorial;
}

int main()
{
    int n,ans;
    cout<<"enter the value of n : ";
    cin>>n;

    ans = fact(n);
    cout<<ans<<endl;
    return 0;
}