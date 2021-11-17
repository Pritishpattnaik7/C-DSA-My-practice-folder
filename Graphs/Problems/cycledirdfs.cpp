//cycle detection in directed graph
//DFS
#include<bits/stdc++.h>
using namespace std;

bool checkCycle(int src, vector<int> adj[], vector<int> vis, vector<int> dfsvis){
    vis[src] = 1;
    dfsvis[src] = 1;
    for (auto x : adj[src]){
        if (!vis[x]){
            if (checkCycle(x, adj, vis, dfsvis)){
                return true;
            }
        }
        else if (dfsvis[x]){
            return true;
        }
    }
    dfsvis[src] = 0;
    return false;
}

bool isCycle(int n, vector<int> adj[]){
    vector<int> vis(n, 0);
    vector<int> dfsvis(n, 0);
    for (int i=1 ; i<=n ; i++){
        if (!vis[i]){
            if (checkCycle(i, adj, vis, dfsvis)){
                return true;
            }
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
    }

    if (isCycle(n, adj)){
        cout << "yes\n";
    }
    else {
        cout << "no\n";
    }
    return 0;
}