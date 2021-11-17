//DP Problem 1 -> Lowest common subsequence (LCS)
#include<bits/stdc++.h>
using namespace std;

//recursive solution(brute force)
int lcsNaive(string s1[], string s2[], int m, int n){
    if (m == 0 || n == 0){
        return 0;
    }
    else if (s1[m-1] == s2[n-1]){
        return 1+lcsNaive(s1, s2, m-1, n-1);
    }
    else{
        return max(lcsNaive(s1, s2, m-1, n) , lcsNaive(s1, s2, m, n-1));
    }
}

//memoization solution(dp)
int lcsMemo(string s1[], string s2[], int m, int n){
    int memo[m+1][n+1];
    //memo matrix initialized to -1
    for (int i=0 ; i<m+1 ; i++){
        for (int j=0 ; j<n+1 ; j++){
            memo[i][j] = -1;
        }
    }
    if (memo[m][n] != -1)
      return memo[m][n];
    else if (m == 0 || n==0)
      return 0;
    else if (s1[m-1] == s2[n-1])
      memo[m][n] = 1 + lcsMemo(s1, s2, m-1, n-1);
    else 
      memo[m][n] = max(lcsMemo(s1, s2, m-1, n) , lcsMemo(s1, s2, m, n-1));
    return memo[m][n];          
}

int main(){
    int m, n;
    cout << "Enter the length of both the strings : ";
    cin >> m >> n;
    string s1[m], s2[n];
    cout<< "Enter the 1st string : ";
    for (int i=0 ; i<m ; i++)
      cin >> s1[i];
    cout<< "Enter the 2nd string : ";
    for (int i=0 ; i<n ; i++)
      cin >> s2[i];
    
    int res = 0;
    res = lcsMemo(s1, s2, m, n);
    cout << res;
    return 0;
}