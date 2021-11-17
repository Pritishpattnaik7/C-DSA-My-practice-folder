#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n ; i++){
        cin >> arr[i];
    }

    int largest = INT_MIN;        //INT_MIN is a very less value 
    int secondLargest = INT_MIN;
    for (int i=0 ; i<n ; i++){
        if (arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i]>secondLargest and arr[i]<largest){
            secondLargest = arr[i];
        }
    }
    cout << secondLargest << "\n";
    return 0;
}