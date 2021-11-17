//kadane's algorithim, maximum subarray sum
//time complexity - O(n) best solution
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of the array : ";
    cin>>n;

    int arr[n];
    for (int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    int maxsum = INT_MIN;
    int cursum = 0;
    for (int i=0 ; i<n ; i++)
    {
        cursum += arr[i];
        if (cursum < 0)
        {
            cursum = 0;
        }
        maxsum = max(maxsum , cursum);
    }

    cout<<maxsum<<endl;
    return 0;
}