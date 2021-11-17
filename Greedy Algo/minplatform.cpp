#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a ; i<b ; i++)

int minPlatforms(int arr[], int dept[], int n){
    sort(arr, arr+n);
    sort(dept, dept+n);
    int ctr = 1;
    int i=1;
    int j=0;
    while (i < n){
        if (arr[i] <= dept[j]){
           ctr++;
        }
        else j++;
        i++;  
    }
    return ctr;
}

int32_t main(){
    int n;
    cout << "Enter the number of trains : ";
    cin >> n;
    int arr[n], dept[n];
    cout << "Enter the arrival time : ";
    rep(i,0,n)
      cin >> arr[i];
    cout << "Enter the departure time : ";
    rep(i,0,n)
      cin >> dept[i];
    
    int ans = minPlatforms(arr, dept, n);
    cout << "Minimum number of platforms : " << ans << endl;
    return 0;
}