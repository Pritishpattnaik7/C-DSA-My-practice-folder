//cycle detection in undirected graph
//by Kahan's algo (BFS)
#include<bits/stdc++.h>
using namespace std;

bool isCyclic(int n, vector<int> adj[]){
    vector<int> indegree(n, 0);
    queue<int> q;
    for (int i=0 ; i<n ; i++){
        for (auto x : adj[i]){
            indegree[x]++;
        }
    }
    for (int i=0 ; i<n ; i++){
        if (indegree[i] == 0){
            q.push(i);
        }
    }
    int ctr = 0;
    while (!q.empty()){
        int node = q.front();
        q.pop();
        ctr++;
        for (auto x : adj[node]){
            indegree[x]--;
            if (indegree[x] == 0){
                q.push(x);
            }
        }
    }
    //if we generated the topo arr
    if (ctr == n) {
        return false;
    }
    return true;
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

    if (isCyclic(n, adj)){
        cout << "Cycle is present\n";
    }else {
        cout << "Cycle NOT present\n";
    }
    return 0;
}