//le 9.1
//function template
#include<bits/stdc++.h>
using namespace std;

template<class A>

A findMin(A arr[], int n){
    A minEle = INT_MAX;
    for (int i=0 ; i<n ; i++){
        minEle = min(minEle, arr[i]);
    }
    return minEle;
}

int main(){
    int n;
    cin >> n;
    int arr_int[n];
    float arr_float[n];

    for (int i=0 ; i<n ; i++){
        cin >> arr_int[i];
    }
    for (int i=0 ; i<n ; i++){
        cin >> arr_float[i];
    }

    cout << findMin(arr_int, n) << endl;
    cout << findMin(arr_float, n) << endl;
    return 0;
}