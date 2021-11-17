//DFS base solution of Topological sort
//here stack is used
#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pair>
#define rep(i,a,b) for(int i=a ; i<b ; i++)
#define res(i,a,b) for(int i=a ; i>b ; i--)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

void findTopoSort(int v, vi &vis, stack<int> &st, vi adj[]){
    vis[v] = 1;
    for (auto x : adj[v]){
        if (vis[x] == 0)
          findTopoSort(x, vis, st, adj);
    }
    st.push(v);
}

vi topoSort(vi adj[], int v){
    stack<int> st;
    vi vis(v,0);
    rep(i,0,v){
        if (vis[i] == 0)
          findTopoSort(i, vis, st, adj);
    }
    vi topo;
    while(!st.empty()){
        topo.push_back(st.top());
        st.pop();
    }
    return topo;
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

    vi topo = topoSort(adj, n);
    rep(i,0,n)
      cout << topo[i] << " ";
    cout << endl;  
    return 0;
}