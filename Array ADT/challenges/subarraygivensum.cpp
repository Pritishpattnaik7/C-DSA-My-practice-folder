//subarray with given sum
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,s;
    cout<<"enter the size of the array : ";
    cin>>n;
    cout<<"enter the sum of the subarray : ";
    cin>>s;

    int arr[n];
    for (int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    int i=0 , j=0 , st=-1 , en=-1 , cursum=0;

    while (j<n && cursum+arr[j]>=s)
    {
        cursum += arr[j];
        j++;
    }

    if (cursum == s)
    {
        cout<< i+1 <<" "<< j <<endl;
        return 0;
    }

    while (j<n)
    {
        cursum += arr[j];
        while (cursum > s)
        {
            cursum -= arr[i];
            i++;
        }

        if (cursum == s)
        {
            st = i+1;
            en = j+1;
            break;
        }

        j++;
    }


    cout<< st <<" "<< en <<endl;

    return 0;
}