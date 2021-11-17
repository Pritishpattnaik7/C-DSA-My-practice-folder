#include <iostream>
using namespace std;

int main()
{
    int n,flag=0;
    cout<<"enter a number : ";
    cin>>n;

    for (int i=2 ; i<n/2 ; i++)
    {
        if (n%2 == 0)
        {
            cout<<"non prime number.";
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    cout<<" prime.";
return 0;    
}