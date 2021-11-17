//minimum coins to make a value
#include<bits/stdc++.h>
using namespace std;

//recursive solution
int getMin(int coins[], int n, int val){
    if (val == 0) return 0;
    int res = INT_MAX;
    for (int i=0 ; i<n ; i++){
        if (coins[i] <= val){
            int subres = getMin(coins, n, val-coins[i]);
            if (subres != INT_MAX)
              res = min(res, subres+1);
        }
    }
    return res;
}

//dp sol
int getMinDP(int coins[], int n, int val){
    int dp[val+1];
    dp[0] = 0;
    for (int i=1 ; i<=val ; i++){
        dp[i] = INT_MAX;
    }
    for (int i=1 ; i<=val ; i++){
        for (int j=0 ; j<n ; j++){
            if (coins[j] <= i){
                int subres = dp[i-coins[j]];
                if (subres != INT_MAX)
                  dp[i] = min(dp[i] , subres+1);
            }
        }
    }
    return dp[val];
}

int main(){
    int n, val;
    cin >> n;
    int coins[n];
    for (int i=0 ; i<n ; i++)
      cin >> coins[i];
    cin >> val;

    int ans = getMinDP(coins, n, val);
    cout << ans;
    return 0;
}