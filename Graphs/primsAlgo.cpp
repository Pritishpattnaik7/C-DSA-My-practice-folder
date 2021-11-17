//Prim's Algorithim(Used for finding the Minimum Spanning Tree)
//Optimized solution
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
    priority_queue<pii, vector<pii>, greater<pii>> pq;   //min heap
    rep(i,0,n){
        key[i] = INT_MAX;
        mstSet[i] = false;
    }
    key[0] = 0;
    parent[0] = -1;
    pq.push({0,0});
    //then we will iterate for n-1 edges of a mst
    rep(i,0,n-1){
        int u = pq.top().ss;
        pq.pop();
        mstSet[u] = true;
        //now we will check for the adjacent edges of u
        for (auto x : adj[u]){
            int v = x.ff;
            int weight = x.ss;
            if (mstSet[v] == false and weight < key[v]){
                parent[v] = u;
                pq.push({key[v], v});
                key[v] = weight;
            }
        }
    }
    cout << "The edges of the MST are : \n";
    rep(i,1,n){
        cout << parent[i] << " - " << i << " \n";
    }
    return 0;
}