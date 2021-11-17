//cycle detection in un-directed graph
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

bool isCycle(vi adj[], int s, bool visited[], int parent){
    visited[s] = true;
    for (auto x : adj[s]){
        if (visited[x] == false){
            if (isCycle(adj, x, visited, s) == true)
              return true;
        }
        else if (x != parent)
          return true;
    }
    return false;
}

bool detectCycle(vi adj[], int v){
    bool visited[v];
    rep(i,0,v)
      visited[i] = false;
    rep(i,0,v){
        if (visited[i] == false){
            if (isCycle(adj, i, visited, -1) == true)
              return true;
        }
    }
    return false;  
}

int32_t main(){

    int v = 6;
    vi adj[v];

    insert(adj,0,1);
    insert(adj,1,2);
    insert(adj,1,3);
    insert(adj,2,3);
    insert(adj,2,4);
    insert(adj,4,5);

    int v1 = 5;
    vi adj1[v1];

    insert(adj1,0,1);
    insert(adj1,1,2);
    insert(adj1,1,4);
    insert(adj1,2,3);

    // printGraph(adj1,v1);

    if (detectCycle(adj1, v1))
      cout << "YES" << endl;
    else 
      cout << "NO";  
    return 0;
}