#include <iostream>
using namespace std;

void printnos(int n)
{
   if (n>0)
   {
      printnos(n-1);
      cout<<n<<" ";
   }
}
int main()
{
    int x;
    cout<<"enter the number : ";
    cin>>x;
    printnos(x);
    return 0;
}
