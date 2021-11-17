#include <iostream>
using namespace std;

bool isprime(int n)
{
    for (int i=2 ; i<=n ; i++)
    {
        if (n%2 == 0)
        return false;
    }
    return true;
}

int main()
{
    int a,b;
    cout<<"enter 2 numbers : ";
    cin>>a>>b;

     for (int i=a ; i<=b ; i++)
     {
         if (isprime(i))
         cout<<i<<endl;
     }
    return 0;
}