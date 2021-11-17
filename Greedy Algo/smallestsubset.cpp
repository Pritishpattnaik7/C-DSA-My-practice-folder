//smallest subset whose sum is greater than the remaining elements in the array
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0 ; i<n ; i++)
      cin >> arr[i];
    sort(arr, arr+n);
    int s = 0; 
    for (int i=0 ; i<n ; i++){
        s += arr[i];
    }
    int ans = 0;
    int s2 = 0;
    int j = n-1;
    while (true){
        s2 += arr[j];
        s -= arr[j];
        ans++;
        j--;
        if (s2 > s){
            break;
        }
    }
    cout << ans << endl;
    return 0;
}