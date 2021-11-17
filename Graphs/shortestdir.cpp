//shortest path in a DAG with weights
//by DFS algo
#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pair>
#define rep(i,a,b) for(int i=a ; i<b ; i++)
#define res(i,a,b) for(int i=a ; i>b ; i--)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

void findTopoSort(int v, vi &vis, stack<int> &st, vector<pii> adj[]){
    vis[v] = 1;
    for (auto x : adj[v]){
        if (vis[x.first] == 0)
          findTopoSort(x.first, vis, st, adj);
    }
    st.push(v);
}

void shortestPath(vector<pii> adj[], int v, int src){
    vi vis(v,0);
    stack<int> st;
    rep(i,0,v){
        if (vis[i] == 0)
          findTopoSort(i, vis, st, adj);
    }
    int dist[v];
    rep(i,0,v){
        dist[i] = INT_MAX;
    }
    dist[src] = 0;
    while (!st.empty()){
        int curr = st.top();
        st.pop();
        if (dist[curr] != INT_MAX){
            for (auto x : adj[curr]){
                if (dist[curr] + x.second < dist[x.first])
                  dist[x.first] = dist[curr] + x.second;
            }
        }
    }
    rep(i,0,v)
      cout << dist[i] << " ";
    cout << endl;  
}


int32_t main(){

    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> adj[n];
    rep(i,0,m){
        int u, v, wt;
        cin >> u >> v >> wt;
        adj[u].push_back({v, wt});
    }
    shortestPath(adj, n, 0);
    return 0;
}