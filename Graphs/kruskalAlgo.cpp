//Kruskal's Algo (for finding MST)
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

struct node{
    int u;
    int v;
    int wt;
    node(int first, int second, int weight){
        u = first;
        v = second;
        wt = weight;
    }
};

bool comp(node a, node b){
    return a.wt < b.wt;
}

int findPar(int u, vi &parent){
    if (u == parent[u])
      return u;
    else 
      return parent[u] = findPar(parent[u], parent);
}

void Union(int u, int v, vi &parent, vi &rank){
    u = findPar(u, parent);
    v = findPar(v, parent);

    if (rank[u] < rank[v])
      parent[u] = v;
    else if (rank[v] < rank[u])
      parent[v] = u;
    else {
        parent[v] = u;
        rank[u]++;
    }    
}

int32_t main(){
    int n, m;
    cin >> n >> m;
    vector<node> edges;
    rep(i,0,m){
        int u, v, wt;
        cin >> u >> v >> wt;
        edges.push_back(node(u, v, wt));
    }
    sort(edges.begin(), edges.end(), comp);

    vi parent(n,0);
    rep(i,0,n)
      parent[i] = i;
    vi rank(n,0);

    int cost = 0;
    vector<pii> mst;
    for (auto x : edges){
        if (findPar(x.u, parent) != findPar(x.v, parent)){
            cost += x.wt;
            mst.push_back({x.u, x.v});
            Union(x.u, x.v, parent, rank);
        }
    }
    cout << cost << endl;
    for (auto x : mst) {
        cout << x.first << " - " << x.second << endl;
    }
    return 0;
}