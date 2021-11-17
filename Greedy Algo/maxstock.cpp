//Buy maximum number of stocks
#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pair>
#define rep(i,a,b) for(int i=a ; i<b ; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

int maxStocks(int k, int arr[], int n){
    vector<pii> v;
    rep(i,0,n)
      v.push_back({arr[i], i+1});
    sort(v.begin(), v.end());
    int res = 0;
    for (int i=0 ; i<n ; i++){
        int price = v[i].first;
        int stock = v[i].second;
        if (price*stock <= k){
            res += stock;
            k -= (price*stock);
        }
        else {
            res += (k/price);
            k -= price*(k/price);
        }
    }
    return res;
}

int32_t main(){
    int n,k;
    cout << "Enter n : ";
    cin >> n;
    cout << "Enter the total money : ";
    cin >> k;

    int arr[n];
    cout << "Enter the price of stocks : ";
    rep(i,0,n)
      cin >> arr[i];


    int max = 0;
    max = maxStocks(k, arr, n);
    cout << "The maximum stocks : " << max << endl;  
    return 0;
}