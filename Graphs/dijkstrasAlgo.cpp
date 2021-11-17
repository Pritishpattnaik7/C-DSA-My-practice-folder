//Dijkstra's Algorithim (used to find the shortest path in undirected weighted graphs)
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

int32_t main(){
    int n,m,src;
    cin >> n >> m >> src;
    vector<pii> adj[n+1];    //for 1-based graphs
    rep(i,0,m+1){
        int u,v,wt;
        cin >> u >> v >> wt;
        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});
    }
    priority_queue<pii, vector<pii>, greater<pii>> pq;    //min heap
    vi distTo(n+1, INT_MAX);       //to store the distance array
    distTo[src] = 0;
    pq.push({0,src});
    while (!pq.empty()){
        int dist = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        for (auto x : adj[node]){
            int next = x.first;
            int nextDist = x.second;
            if (distTo[next] > distTo[node] + nextDist){
                distTo[next] = distTo[node] + nextDist;
                pq.push({distTo[next], next});
            }
        }
    }
    
    cout << "The distance from the source " << src << "is : ";
    rep(i,0,n+1)
      cout << distTo[i] << " ";
    cout << endl;  

    return 0;
}