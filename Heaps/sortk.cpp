//sort k sorted arrays
#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pair>
#define rep(i,a,b) for(int i=a ; i<b ; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

void sortK(vi &a, int k){
    priority_queue<int, vi, greater<int>> pq;
    for (int i=0 ; i<=k ; i++){
        pq.push(a[i]);
    }
    int idx = 0;
    for (int i = k+1 ; i<a.size() ; i++){
        a[idx] = pq.top();
        pq.pop();
        pq.push(a[i]);
        idx++;
    }
    while(pq.empty() == false){
        a[idx] = pq.top();
        pq.pop();
        idx++;
    }
}

int32_t main(){

    int n,k, i;
    cout << "Enter the size : ";
    cin >> n;

    cout << "Enter the key: ";
    cin >> k;

    vi a(n);
    cout << "Enter the elements : ";
    rep(i, 0 , n)
      cin >> a[i];
      

    sortK(a, k);  

    rep(i, 0, n)
      cout << a[i] << " ";
    cout << endl;  

    return 0;
}