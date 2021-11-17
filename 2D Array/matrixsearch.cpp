//O(n) search, most optimized solution
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cout << "enter rows and columns : ";
    cin>>n>>m;

    int target;
    cout<<"enter the number to be searched : ";
    cin>>target;

    int mat[n][m];
    for (int i=0 ; i<n ; i++)
    {
        for (int j=0 ; j<m ; j++)
        {
            cin>>mat[i][j];
        }
    }

    int r = 0 , c = m-1;
    bool found = false;
    while (r < n && c>=0)
    {
        if (mat[r][c] == target)
        {
            found = true;
        }
        else if (mat[r][c] > target)
        {
            c--;
        }
        else
        {
            r++;
        }
        
    }

    if(found)
      cout<<"element found \n";
    else
      cout<<"element NOT found!!!";
      

    return 0;
}