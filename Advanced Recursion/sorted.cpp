//to check if an array is sorted or not (*strictly increasing order)
#include <bits/stdc++.h>
using namespace std;

bool cheackSort(int arr[] , int n)
{
    if (n==1){
        return true;
    }
    bool restArray = cheackSort(arr+1 , n-1);
    if (arr[0]<arr[1] && restArray){
        return true;
    }
    return false;
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    cout << cheackSort(arr , 5);
    return 0;
}
