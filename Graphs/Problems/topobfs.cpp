//topological sort
//BFS (Kahan's algo)
#include<bits/stdc++.h>
using namespace std;

vector<int> topoSortBfs(int n, vector<int> adj[]){
    queue<int> q;
    vector<int> indegree(n, 0);
    //1.we find the indegree of each node
    for (int i=0 ; i<n ; i++){
        for (auto x : adj[i]){
            indegree[x]++;
        }
    }

    //2.check which have indegree as 0
    for (int i=0 ; i<n ; i++){
        if (indegree[i] == 0){
            q.push(i);
        }
    }

    //BFS algo
    vector<int> topo;
    while (!q.empty()){
        int node = q.front();
        q.pop();
        topo.push_back(node);
        for (auto x : adj[node]){
            indegree[x]--;
            if (indegree[x] == 0){
                q.push(x);
            }
        }
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

    vector<int> ans = topoSortBfs(n, adj);
    for (auto x : ans){
        cout << x << " ";
    }cout << endl;
    return 0;
}