//shortest path in undirected graph
#include<bits/stdc++.h>
using namespace std;

vector<int> shortestPathBFS(int n, vector<int> adj[], int src){
    vector<int> dist(n, INT_MAX);
    queue<int> q;
    dist[src] = 0;
    q.push(src);
    while (!q.empty()){
        int node = q.front();
        q.pop();
        for (auto x : adj[node]){
            if (dist[node] + 1 < dist[x]){
                dist[x] = dist[node]+1;
                q.push(x);
            }
        }
    }
    return dist;
}

int main(){
     int n, m;
    cin >> n >> m;
    vector<int> adj[n+1];
    for (int i=0 ; i<m ; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> ans = shortestPathBFS(n, adj, 0);
    for (auto x : ans){
        cout << x << " ";
    }cout << endl;
    return 0;
}