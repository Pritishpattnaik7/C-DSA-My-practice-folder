#include<bits/stdc++.h>
using namespace std;

bool bipartiteBfs(int src, vector<int> adj[], vector<int> &colour){
    queue<int> q;
    q.push(src);
    colour[src] = 1;
    while (!q.empty()){
        int node = q.front();
        q.pop();
        for (auto x : adj[node]){
            if (colour[x] == -1){
                colour[x] = 1 - colour[node];
                q.push(x);
            }
            else if (colour[x] == colour[node]){
                return false;
            }
        }
    }
    return true;
}

bool checkBipartite(int v, vector<int> adj[]){
    vector<int> colour(v, -1);
    for (int i=0 ; i<v ; i++){
        if (colour[i] == -1){
            if (!bipartiteBfs(i, adj, colour)){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> adj[n];
    for (int i=0 ; i<m ; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    if (checkBipartite(n, adj)){
        cout << "YES\n";
    }else {
        cout << "NO";
    }
    return 0;
}