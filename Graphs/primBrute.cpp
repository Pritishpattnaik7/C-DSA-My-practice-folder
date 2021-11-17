//Prim's Algorithim , Bruteforce approach
//Used for finding minimum spanning tree
//Time complexity - greater than o(n^2)
#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pair>
#define rep(i,a,b) for(int i=a ; i<b ; i++)
#define res(i,a,b) for(int i=a ; i>b ; i--)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

int32_t main(){
    int n, m;
    cin >> n >> m;
    vector<pii> adj[n];
    rep(i,0,m){
        int u, v, wt;
        cin >> u >> v >> wt;
        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});
    }

    int key[n];
    int parent[n];
    bool mstSet[n];
    rep(i,0,n){
        key[i] = INT_MAX;
        parent[i] = -1;
        mstSet[i] = false;
    }
    key[0] = 0;
    parent[0] = -1;

    //then we will iterate for n-1 edges for a mst
    int mini = INT_MAX;
    int u;
    rep(i,0,n-1){
        rep(i,0,n){
            if (mstSet[i] == false and key[i]<mini){
            mini = key[i];
            u = i;
        }
        mstSet[u] = true;
        //we will check for it's adjacent edges
        for (auto x : adj[u]){
            int v = x.ff;
            int weight = x.ss;
            if (mstSet[v] == false and weight < key[v]){
                parent[v] = u;
                key[v] = weight;
            }
        }
        }
    }
    for(int i=1 ; i<n ; i++){
        cout << parent[i] << "-" << i << " \n";
    }
    return 0;
}