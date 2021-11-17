//Implementation of graphs using adjacency list 
#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pair>
#define rep(i,a,b) for(int i=a ; i<b ; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

void addEdge(vi adj[] , int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vi adj[] , int v){
    rep(i, 0, v){
        for(auto x : adj[i])    //for-each loop
          cout << x << " ";
        cout << endl;  
    }
}

int32_t main(){
    
    int v = 4;
    vi adj[4];

    //adding edges
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);

    //print graph
    printGraph(adj, v);
    return 0;
}