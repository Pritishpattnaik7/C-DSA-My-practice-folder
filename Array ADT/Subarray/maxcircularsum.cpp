//maximum circular subarray sum
#include <bits/stdc++.h>
using namespace std;

int kadane(int arr[] , int n)
{
    int cursum = 0;
    int maxsum = INT_MIN;
    for (int i=0 ; i<n ; i++)
    {
        cursum += arr[i];
        if (cursum < 0)
        {
            cursum = 0;
        }
        maxsum = max (maxsum , cursum);
    }

    return maxsum;
}

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

    int wrapsum;
    int nonwrapsum;

    nonwrapsum = kadane(arr , n);

    int totsum = 0;
    for (int i=0 ; i<n ; i++)
    {
        totsum += arr[i];
        arr[i] = -arr[i];
    }

    wrapsum = totsum + kadane(arr , n);

    cout<<max(wrapsum , nonwrapsum);
    return 0;
}