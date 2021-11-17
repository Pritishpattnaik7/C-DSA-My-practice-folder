//variation of LIS 3;
//maximum length of bitonic subsequence
//**bitonic : a subsequence which is first increasing and then decreasing
#include<bits/stdc++.h>
using namespace std;

// int bitonic(int arr[], int n){
//     int lis[n], lds[n];
//     lis[0] = 1;
//     lds[n-1] = 1;
//     //finding lis[]
//     for (int i=1 ; i<n ; i++){
//         lis[i] = 1;
//         for (int j=0 ; j<n ; j++){
//             if (arr[j] < arr[i])
//               lis[i] = max(lis[i], lis[j]+1);
//         }
//     }
//     //finding lds[]
//     for (int i=n-1 ; i>=0 ; i--){
//         lds[i] = 1;
//         for (int j=n-2 ; j>=0 ; j--){
//             if (arr[j] < arr[i])
//               lds[i] = max(lds[i], lds[j]+1);
//         }
//     }
//     int res = 0;
//     for (int i=0 ; i<n ; i++){
//         res = max(res, lis[i]+lds[i]-1);
//     }
//     return res;
// }

int main(){
    int n = 8;
    vector<int> arr = {1,11,2,10,4,5,2,1};
    vector<int> forward(n,1);  //for lis
    vector<int> backward(n,1); //for lds
    //finding lis
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<i ; j++){
            if (arr[j] < arr[i])
              forward[i] = max(forward[i] , forward[j]+1);
        }
    }
    //finding lds
    for (int i=n-1 ; i>=0 ; i--){
        for (int j=n-1 ; j>i ; j--){
            if (arr[j] < arr[i])
              backward[i] = max(backward[i] , backward[j]+1);
        }
    }

    int ans = 0;
    for (int i=0 ; i<n ; i++){
        ans = max(ans, forward[i]+backward[i]-1);
    }

    cout << ans;
    return 0;
}