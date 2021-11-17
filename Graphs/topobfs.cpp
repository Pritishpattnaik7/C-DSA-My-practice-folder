//Topological sort BFS Kahn's algo
//here queue is used
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

vi topoSort(vi adj[], int v){
    queue<int> q;
    vi indegree(v,0);
    rep(i,0,v){
        for (auto x : adj[i])
          indegree[x]++;
    }
    rep(i,0,v){
        if (indegree[i] == 0)
          q.push(i);
    }
    vi topo;
    while (!q.empty()){
        int curr = q.front();
        q.pop();
        topo.push_back(curr);
        for (auto x : adj[curr]){
            indegree[x]--;
            if (indegree[x] == 0)
              q.push(x);
        }
    }
    return topo;
}

int32_t main(){

    int n,m;
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