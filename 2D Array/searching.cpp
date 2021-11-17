#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , m;
    cout<<"enter rows and columns : ";
    cin>>n>>m;

    int arr[n][m];

    for (int i=0 ; i<n ; i++)
    {
        for (int j=0 ; j<m ; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"the matrix is : \n";

    for (int i=0 ; i<n ; i++)
    {
        for (int j=0 ; j<m ; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    bool flag = false;
    int ele;
    cout<<"enter the element to be searched : ";
    cin>>ele;

    for (int i=0 ; i<n ; i++)
    {
        for (int j=0 ; j<m ; j++)
        {
            if (arr[i][j] == ele)
            {
                cout<<i<<" "<<j<<endl;
                flag = true;

            }
        }
    }

    if (flag)
    {
        cout<<"element is found\n";
    }
    else 
    {
        cout<<"element is NOT found\n";
    }
    return 0;
}