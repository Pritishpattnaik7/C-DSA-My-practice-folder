#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , m;
    cout<<"enter rows and columns (rows should be equal to column) : ";
    cin>>n>>m;

    int arr[n][m];

    for (int i=0 ; i<n ; i++)
    {
        for (int j=0 ; j<m ; j++)
        {
            cin>>arr[i][j];
        }
    }

    for (int i=0 ; i<n ; i++)
    {
        for (int j=i ; j<m ; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    cout<<"the transpose matrix is : \n";

    for(int i=0 ; i<n ; i++)
    {
        for (int j=0 ; j<m ; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}