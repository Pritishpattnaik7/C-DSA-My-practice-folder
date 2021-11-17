//for disconnected graph
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
            visited[x] = true;
            DFSRec(adj, x, visited);
        }
    }
}

void DFS(vi adj[], int v, int s){
    bool visited[v];
    rep(i,0,v)
      visited[i] = false;
    rep(i,0,v){
        if (visited[i] == false){
            DFSRec(adj,i,visited);
        }
    }  
}



int32_t main(){

    int v = 5;
    vi adj[v];

    insert(adj,0,1);
    insert(adj,0,2);
    insert(adj,1,2);
    insert(adj,3,4);

    //printGraph(adj,v);
    
    DFS(adj, v, 0);

    return 0;
}
