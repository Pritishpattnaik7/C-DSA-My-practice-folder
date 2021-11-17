//Kosaraju's Algo (used for finding strongly components)
#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pair>
#define rep(i,a,b) for(int i=a ; i<b ; i++)
#define res(i,a,b) for(int i=a ; i>b ; i--)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

void topoSort(int node, stack<int> &st, vi &vis, vi adj[]){
    vis[node] = 1;
    for (auto x : adj[node]){
        if (vis[x] != 0){
            topoSort(x, st, vis, adj);
        }
    }
    st.push(node);
}

void revDFS(int node, vi &vis, vi transpose[]){
    cout << node << " ";
    vis[node] = 1;
    for (auto x : transpose[node]){
        if (vis[x] != 0){
            revDFS(x, vis, transpose);
        }
    }
}

int32_t main(){
    int n, m;
    cin >> n >> m;
    vi adj[n];
    rep(i,0,m){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    
    //finding toposort
    stack<int> st;
    vi vis(n,0);
    rep(i,0,n){
        if (vis[i] != 0)
          topoSort(i, st, vis, adj);
    }

    //transpose
    vi transpose[n];
    rep(i,0,n){
        vis[i] = 0;
        for (auto x : adj[i]){
            transpose[x].push_back(i);
        }
    }

    //dfs acc to the finishing time of the stack in the toposort
    while(!st.empty()){
        int node = st.top();
        st.pop();
        if (vis[node] != 0){
            cout << "The SCCs are : \n";
            revDFS(node, vis, transpose);
            cout << endl;
        }
    }
    return 0;
}