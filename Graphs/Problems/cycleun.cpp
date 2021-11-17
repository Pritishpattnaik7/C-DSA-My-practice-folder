#include<bits/stdc++.h>
using namespace std;

bool dfs(int src, int parent, vector<int> adj[], vector<bool> &vis){
    vis[src] = true;
    for (auto x : adj[src]){
        if (!vis[x]){
            if (dfs(x, src, adj, vis)){
                return true;
            }
            else if (x != parent){
                return true;
            }
        }
    }
    return false;
}

bool isCycle(int v, vector<int> adj[]){
    vector<bool> vis(v, false);
    for (int i=0 ; i<v ; i++){
        if (!vis[i]){
            bool f = dfs(i, -1, adj, vis);
            if (f) return true;
        }
    }
    return false;
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

    if (isCycle(n, adj)){
        cout << "Cycle is present\n";
    }
    else {
        cout << "Cycle NOT present";
    }
    return 0;
}