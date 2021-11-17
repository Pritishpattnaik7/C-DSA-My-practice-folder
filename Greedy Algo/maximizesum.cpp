//maximize the sum after k negations
#include <bits/stdc++.h>
using namespace std;

int maximizeSum(int arr[], int n, int k){
    sort(arr, arr+n);
    //for any -ve element in the array
    for (int i=0 ; i<n ; i++){
        if (arr[i]<0 and k>0){
            arr[i] = -arr[i];
            k--;
        }
    }
    //find the sum
    int sum = 0;
    for (int i=0 ; i<n ; i++)
      sum += arr[i];

    //if all the elements are positive
    int x = *min_element(arr, arr+n);
    if (k%2 != 0){             //check if k is odd
        sum -= 2*x;
    }
    return sum;
}

int32_t main(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    
    int maxSum = maximizeSum(arr, n, k);
    cout << "Max sum is : " << maxSum << endl;
    return 0;
}