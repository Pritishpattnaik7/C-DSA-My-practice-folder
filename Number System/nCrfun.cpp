#include <iostream>
using namespace std;

int fact(int num)
{
    int factorial=1;
    for (int i=2 ; i<=num ; i++)
    {
        factorial*=i;
    }
    return factorial;
}

int main()
{
    int n,r,ans;
    cout<<"enter the values of n and r : ";
    cin>>n>>r;

    ans = fact(n)/(fact(r)*fact(n-r));
    cout<<ans<<endl;
    return 0;

}