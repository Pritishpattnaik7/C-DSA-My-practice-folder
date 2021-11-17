//0-1Knapsack
#include<bits/stdc++.h>
using namespace std;

//recursive solution
int knapsack(int W, int val[], int wt[], int n){
    if (n==0 || W==0)
      return 0;
    if (wt[n-1] > W)
      return knapsack(W, val, wt, n-1);
    else 
      return max(knapsack(W, val, wt, n-1), val[n-1]+ knapsack(W-wt[n-1], val, wt, n-1));
}

//dp solution
int knapsackdp(int W, int val[], int wt[], int n){
    int dp[n+1][W+1];
    for (int i=0 ; i<=W ; i++)
      dp[0][i] = 0;
    for (int i=0 ; i<=n ; i++)
      dp[i][0] = 0;
    for (int i=1 ; i<=n ; i++){
        for (int j=1 ; j<=W ; j++){
            if (wt[i-1] > j)
              dp[i][j] = dp[i-1][j];
            else
              dp[i][j] = max(val[i-1]+dp[i-1][j-wt[i-1]], dp[i-1][j]);  
        }
    }
    return dp[n][W];  
}

int main(){
    int n, W;
    cin >> n;
    int val[n], wt[n];
    for (int i=0 ; i<n ; i++)
      cin >> val[i];
    for (int i=0 ; i<n ; i++)
      cin >> wt[i];
    cin >> W;
    
    int ans = knapsackdp(W, val, wt, n);
    cout << ans;
    return 0;
}