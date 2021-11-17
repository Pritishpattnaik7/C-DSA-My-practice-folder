//Indian coin change
#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pair>
#define rep(i,a,b) for(int i=a ; i<b ; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

int32_t main(){
    
    int n;
    cin >> n;
    vi a(n);
    rep(i,0,n)
      cin >> a[i];
    int amt;
    cin >> amt;

    sort(a.begin(), a.end(), greater<int>());
    int res = 0;
    rep(i,0,n){
        res += amt/a[i];
        amt -= amt/a[i] * a[i];
    }

    cout << res << endl;
      
    return 0;
}