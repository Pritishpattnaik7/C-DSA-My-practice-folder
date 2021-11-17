#include<bits/stdc++.h>
using namespace std;

vector<int> dfsStore;

void solve(int src, vector<int> &vis, vector<int> adj[]){
    vis[src] = 1;
    dfsStore.push_back(src);
    for (auto x : adj[src]){
        if (!vis[x]){
            solve(x, vis, adj);
        }
    }
}

vector<int> DFS(vector<int> adj[], int v){
    vector<int> vis(v, 0);
    solve(0, vis, adj);
    return dfsStore;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<int>  adj[n+1];
    for (int i=0 ; i<m ; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> ans = DFS(adj, n);
    for (auto x : ans){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}