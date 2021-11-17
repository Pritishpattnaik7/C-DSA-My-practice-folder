//maximum subarray sum
//time complexity :- O(n^3) brute force approach
#include<bits/stdc++.h>
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
    for (int i=0 ; i<n ; i++)
    {
        for (int j=i ; j<n ; j++)
        {
            int sum=0;
            for (int k=i ; k<=j ; k++)
            {
                sum += arr[k];
            }

            maxsum = max(maxsum , sum);
            
        }
    }

    cout<<maxsum<<endl;
    return 0;
}