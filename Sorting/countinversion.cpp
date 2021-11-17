#include <bits/stdc++.h>
using namespace std;

long long merge(int arr[] , int l , int mid , int r)
{
    int n1 = mid-l+1;
    int n2 = r-mid;

    int a[n1];
    int b[n2];
    for (int i=0 ; i<n1 ; i++)
    {
        a[i] = arr[i];
    }
    for (int i=0 ; i<n2 ; i++)
    {
        b[i] = arr[i];
    }
    
}

long long mergeSort(int arr[] , int l , int r)
{
      long long inv = 0;
    if (l<r)
    {
        int mid = (l+r)/2;
        inv += mergeSort(arr , l , mid);
        inv += mergeSort(arr , mid+1 , r);
        inv += merge(arr,l,mid,r);
    }
}

int32_t main()
{
    int n;
    cout << "enter the size of the array : ";
    cin >> n;

    int arr[n];
    for (int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    return 0;
}