//count BSTs with n keys
#include<bits/stdc++.h>
using namespace std;

int countBST(int n){
    int dp[n+1];
    dp[0] = 1;
    for (int i=1 ; i<=n ; i++){
        dp[i] = 0;
        for (int j=0 ; j<i ; j++){
            dp[i] += dp[j]*dp[i-j-1];
        }
    }
    return dp[n];
}

int main(){
    int n;
    cin >> n;
    int ans = countBST(n);
    cout << ans << "\n";
    return 0;
}