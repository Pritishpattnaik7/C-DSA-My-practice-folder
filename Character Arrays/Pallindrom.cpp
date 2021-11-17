#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size : ";
    cin>>n;

    char arr[n+1];
    cin>>arr;

    bool check = true;

    for (int i=0 ; i<n ; i++)
    {
        if (arr[i] != arr[n-1-i])
        {
            check = false;
            break;
        }
    }

    if (check == true)
      cout<<"word is a pallindrom"<<endl;
    else
      cout<<"word is NOT a pallindrom!"<<endl;
      
    return 0;
}