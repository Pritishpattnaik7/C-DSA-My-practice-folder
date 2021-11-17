//egg dropping problem
#include<bits/stdc++.h>
using namespace std;

int eggDrop(int n, int k){
    int dp[n+1][k+1];
    for (int i=1 ; i<=n ; i++){
        for (int j=1 ; j<=k ; j++){
            if (i == 1)
               dp[i][j] = j;
            else if (j == 1)
               dp[i][j] = 1;
            else{
                int m = INT_MAX;
                for (int mj=j-1, pj=0 ; mj>=0 ; mj--,pj++){
                    int v1 = dp[i][mj];  //egg survives
                    int v2 = dp[i-1][pj];  //egg breaks
                    int val = max(v1, v2);
                    m = min(val, m);
                }
                dp[i][j] = m + 1;
            }    
        }
    }
    return dp[n][k];
}

int main(){
    int n, k;
    cout << "Enter the number of eggs : ";
    cin >> n;
    cout << "Enter the number of floors : ";
    cin >> k;

    int ans = eggDrop(n, k);
    cout << "Min attempts : " << ans << endl;
    return 0;
}