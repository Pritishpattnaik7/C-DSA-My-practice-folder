//shortest path in an undirected graph with unit weights
//we will use bfs algo 
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

void shortestPath(vi adj[], int v, int src){
    int dist[v];
    rep(i,0,v)
      dist[i] = INT_MAX;

    dist[src] = 0;
    queue<int> q;
    q.push(src);
    while (!q.empty()){
        int curr = q.front();
        q.pop();
        for (auto x : adj[curr]){
            if (dist[curr]+1 < dist[x]){
                dist[x] = dist[curr]+1; 
                q.push(x);
            }
        }
    }
    rep(i,0,v)
      cout << dist[i] << " ";
    cout << endl;     
}

int32_t main(){
    int n,m;
    cin >> n >> m;
    vi adj[n];
    rep(i,0,m){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    shortestPath(adj, n, 0);
    return 0;
}