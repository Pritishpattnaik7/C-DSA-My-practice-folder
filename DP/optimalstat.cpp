//optimal statergy for a game
#include<bits/stdc++.h>
using namespace std;

//dp solution
int optimalStatergy(int arr[], int n){
    //we will make an 2d array of size n
    int dp[n][n];
    for (int g=0 ; g<n ; g++){
        for (int i=0, j=g ; j<n ; i++,j++){
            if (g == 0)
              dp[i][j] = arr[i];
            else if (g == 1)
              dp[i][j] = max(arr[i], arr[j]);
            else {
                int val1 = arr[i] + min(dp[i+2][j-1], dp[i+1][j-1]);
                //i -> i+1, j
                //if i+1 -> i+2, j
                //or j -> i+1, j-1
                int val2 = arr[j] + min(dp[i+1][j-1], dp[i][j-2]);
                //j -> i, j-1
                //if i -> i+1, j-1
                //or j-1 -> i, j-2
                int val = max(val1, val2);
                dp[i][j] = val;
            }     
        }
    }
    return dp[0][n-1];
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0 ; i<n ; i++)
      cin >> arr[i];
    
    int ans = optimalStatergy(arr, n);
    cout << ans;
}