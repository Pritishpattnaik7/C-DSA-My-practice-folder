#include<bits/stdc++.h>
using namespace std;

//recursive solution
// int editDist(string s1[], string s2[], int m, int n){
//     if (m == 0) return n;
//     else if (n == 0) return m;
//     else if (s1[m-1] == s2[n-1])
//       return editDist(s1, s2, m-1, n-1);
//     else 
//       return min(editDist(s1, s2, m, n-1), editDist(s1, s2, m-1, n), editDist(s1, s2, m-1, n-1));
// }

//dp solution
int editDist(string s1[], string s2[], int m, int n){
    int dp[m+1][n+1];
    //base cases
    for (int i=0 ; i<=m ; i++){
        dp[i][0] = i;
    }
    for (int j=0 ; j<=n ; j++){
        dp[0][j] = j;
    }
    //main cases
    for (int i=0 ; i<=m ; i++){
        for (int j=0 ; j<=n ; j++){
            if (s1[i-1] == s2[j-1]){
                dp[i][j] = dp[i-1][j-1];
            }
            else {
                dp[i][j] = min(dp[i][j-1], dp[i-1][j], dp[i-1][j-1]);
            }
        }
    }
    return dp[m][n];
}

int main(){
    int n, m;
    cout << "Enter the length of both strings : ";
    cin >> m >> n;
    string s1[m], s2[n];
    cout << "Enter string 1 : ";
    for (int i=0 ; i<m ; i++)
      cin >> s1[i];
    cout << "Enter string 2 : ";  
    for (int i=0 ; i<n ; i++)
      cin >> s2[i];

    int res = 0;
    res = editDist(s1, s2, m, n);
    cout << res;
    return 0;
}