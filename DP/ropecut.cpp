//Maximum cuts in a rope
#include<bits/stdc++.h>
using namespace std;

// //recursive sol
// int maxCutRecursive(int n, int a, int b, int c){
//     if (n == 0) return 0;
//     if (n < 0) return -1;
//     int res = max(maxCutRecursive(n-a,a,b,c), maxCutRecursive(n-b,a,b,c), maxCutRecursive(n-c,a,b,c));
//     if (res == -1)
//       return -1;
//     return res+1;  
// }

//dp sol
int maxCuts(int n, int a, int b, int c){
    int dp[n+1];
    dp[0] = 0;
    for (int i=1 ; i<=n ; i++){
        dp[i] = -1;
        if (i-a >= 0) 
          dp[i] = max(dp[i], dp[i-a]);
        else if (i-b >= 0)
          dp[i] = max(dp[i], dp[i-b]);
        else if (i-c >= 0)
          dp[i] = max(dp[i], dp[i-c]);

        if (dp[i] != -1)
          dp[i]++;     
    }
    return dp[n];
}

int main(){
    int n,a,b,c;
    cout << "Enter the length of the rope : ";
    cin >> n;
    cout << "Enter the cut lengths : ";
    cin >> a >> b >> c;

    int ansdp = maxCuts(n,a,b,c);
    cout << ansdp << endl;
    return 0;
}