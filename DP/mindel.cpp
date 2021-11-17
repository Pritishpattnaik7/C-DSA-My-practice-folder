//variation of LIS 1
//minimum number of deletions to make an array sorted
#include<bits/stdc++.h>
using namespace std;

int MinDel(int arr[], int n){
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
    for (int i=0 ; i<n ; i++){
        res = max(res, lis[i]);
    }
    return n-res;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0 ; i<n ; i++)
      cin >> arr[i];

    int ans = MinDel(arr, n);
    cout << ans;  
    return 0;
}