//topological sort
//dfs
#include<bits/stdc++.h>
using namespace std;

void findTopoDfs(int src, vector<int> &vis, stack<int> &st, vector<int> adj[]){
    vis[src] = 1;
    for (auto x : adj[src]){
        if (!vis[x]){
            findTopoDfs(x, vis, st, adj);
        }
    }
    st.push(src);
}

vector<int> topoSort(int n, vector<int> adj[]){
    vector<int> vis(n, 0);
    stack<int> st;
    for (int i=0 ; i<n ; i++){
        if (!vis[i]){
            findTopoDfs(i, vis, st, adj);
        }
    }
    vector<int> topo;
    while (!st.empty()){
        topo.push_back(st.top());
        st.pop();
    }
    return topo;
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

    vector<int> ans = topoSort(n, adj);
    for (auto x : ans){
        cout << x << " ";
    }cout << endl;
    return 0;
}