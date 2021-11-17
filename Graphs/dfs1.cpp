//for connected graph Depth First sort(DFS)
#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pair>
#define rep(i,a,b) for(int i=a ; i<b ; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

void insert(vi adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vi adj[], int v){
    rep(i,0,v){
        for (auto x : adj[i])
          cout << x << " ";
        cout << endl;  
    }
}

void DFSRec(vi adj[], int s, bool visited[]){
    visited[s] = true;
    cout << s << " ";
    for (auto x : adj[s]){
        if (visited[x] == false){
            DFSRec(adj, x, visited);
        }
    }
}

void DFS(vi adj[], int v, int s){
    bool visited[v];
    rep(i,0,v)
      visited[i] = false;
    DFSRec(adj, s, visited);  
}

int32_t main(){

    int v = 5;
    vi adj[v];
    
    insert(adj, 0, 1);
    insert(adj, 0, 2);
    insert(adj, 1, 3);
    insert(adj, 1, 4);
    insert(adj, 2, 3);
    insert(adj, 3, 4);

    // printGraph(adj, v);

    int v1 = 7;
    vi adj1[v1];

    insert(adj1, 0, 1);
    insert(adj1, 0, 4);
    insert(adj1, 1, 2);
    insert(adj1, 2, 3);
    insert(adj1, 4, 5);
    insert(adj1, 4, 6);
    insert(adj1, 5, 6);

    //printGraph(adj1, v1);
    
    //DFS(adj, v, 0);

    DFS(adj1, v1, 0);
    return 0;
}