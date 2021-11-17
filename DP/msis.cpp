//variation of LIS 2
//minimum sum increasing subsequence
#include<bits/stdc++.h>
using namespace std;

int MSIS(int arr[], int n){
    int msis[n];
    for (int i=0 ; i<n ; i++){
        msis[i] = arr[i];
        for (int j=0 ; j<i ; j++){
            if (arr[j] < arr[i])
              msis[i] = max(msis[i] , arr[i]+msis[j]);
        }
    }
    int res = msis[0];
    for (int i=0 ; i<n ; i++){
        res = max(res, msis[i]);
    }
    return res;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0 ; i<n ; i++)
      cin >> arr[i];

    int res = MSIS(arr, n);
    cout << res;   
    return 0;
}
