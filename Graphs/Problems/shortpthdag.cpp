//shortest path in directed acyclic graph(DAG)
#include<bits/stdc++.h>
using namespace std;

void findTopoSort(int src, vector<int> &vis, stack<int> &st, vector<pair<int,int>> adj[]){
    vis[src] = 1;
    for (auto x : adj[src]){
        if (!vis[x.first]){
            findTopoSort(x.first, vis, st, adj);
        }
    }
    st.push(src);
}

vector<int> shortestPath(int src, int n, vector<pair<int, int>> adj[]){
    vector<int> vis(n, 0);
    stack<int> st;
    for (int i=0 ; i<n ; i++){
        if (!vis[i]){
            findTopoSort(i, vis, st, adj);
        }
    }
    vector<int> dist(n, INT_MAX);
    dist[src] = 0;
    while (!st.empty()){
        int node = st.top();
        st.pop();

        if (dist[node] != INT_MAX){
            for (auto x : adj[node]){
                if (dist[node] + x.second < dist[x.first]){
                    dist[x.first] = dist[node] + x.second;
                }
            }
        }
    }
    return dist;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<pair<int, int> > adj[n];
    for (int i=0 ; i<m ; i++){
        int u, v, wt;
        cin >> u >> v >> wt;
        adj[u].push_back({v, wt});
    }

    vector<int> ans = shortestPath(0, n, adj);
    for (auto x : ans){
        cout << x << " ";
    }cout << endl;
    return 0;
}