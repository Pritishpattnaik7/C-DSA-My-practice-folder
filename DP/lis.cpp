//DP problem 4
//Longest Increasing Subsequence(LIS)
#include<bits/stdc++.h>
using namespace std;

//naive solution
int LISnaive(int arr[], int n){
    int lis[n];
    lis[0] = 1;
    for (int i=1 ; i<n ; i++){
        lis[i] = 1;
        for (int j=0 ; j<i ; j++){
            if (arr[j] < arr[i])
              lis[i] = max(lis[i], lis[j]+1);
        }
    }
    int res = lis[0];
    //find the largest element in the lis array
    for (int i=0 ; i<n ; i++){
        res = max(res, lis[i]);
    }
    return res;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0 ; i<n ; i++)
      cin >> arr[i];
    
    int res = 0;
    res = LISnaive(arr, n);
    cout << res;
    return 0;
}