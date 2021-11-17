//cycle detection in directed graph (DFS based sol)
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

bool DFSRec(vi adj[], int s, bool visited[], bool recst[]){
    visited[s] = true;
    recst[s] = true;
    for (auto x : adj[s]){
        if (visited[x] == false and DFSRec(adj, x, visited, recst))
          return true;
        else if (recst[x] == true)
          return true;  
    }
    recst[s] = false;
    return false;
}

bool DFS(vi adj[], int v){
    bool visited[v];
    bool recst[v];
    rep(i,0,v){
        visited[i] = false;
        recst[i] = false;
    }
    rep(i,0,v){
        if (visited[i] == false){
            if (DFSRec(adj, i, visited, recst) == true)
              return true;
        }
    }
    return false;
}

int32_t main(){

    int n, m;
    cin >> n >> m;
    vi adj[n];
    rep(i,0,m){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    if (DFS(adj, n))
      cout << "Cycle is present\n";
    else 
      cout << "Cycle is NOT present\n";  
    return 0;
}