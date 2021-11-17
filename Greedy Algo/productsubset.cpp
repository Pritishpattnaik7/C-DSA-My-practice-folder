#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0 ; i<n ; i++){
        cin >> arr[i];
    }

    int prod = 1;
    int zero_ctr = 0;
    int negative_ctr = 0;
    int max_negative = INT32_MIN;

    for (int i=0 ; i<n ; i++){
        if (arr[i] == 0){
            zero_ctr++;
            continue;
        }
        if (arr[i] < 0){
            negative_ctr++;
            max_negative = max(max_negative, arr[i]);
        }
        prod = prod*arr[i];
    }
    if (zero_ctr == n){
        cout << "Max product is : 0" << endl;
        return 0;
    }
    else if (negative_ctr == 1 and zero_ctr+negative_ctr == n){
        cout << "Max product is : 0" << endl;
        return 0;
    }
    else if (negative_ctr%2 != 0){
        prod = prod/max_negative;
    }

    cout << "Max product is : " << prod;
    return 0;
}