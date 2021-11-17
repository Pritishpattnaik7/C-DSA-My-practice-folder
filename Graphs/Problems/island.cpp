//leetcode 200
//for horizontal and vertical
//gfg - diagonal bhi achi (more extra 4 conditions)
#include<bits/stdc++.h>
using namespace std;

void dfs(int i, int j, vector<vector<int>> &vis, vector<vector<int>>& grid){
        int n = grid.size();
        int m = grid[0].size();
        if (i<0 or j<0 or i >= n or j >= m) return;
        if (grid[i][j] == 0) return;
        if (!vis[i][j]){
            vis[i][j] = 1;
            dfs(i-1, j, vis, grid);
            dfs(i+1, j, vis, grid);
            dfs(i, j-1, vis, grid);
            dfs(i, j+1, vis, grid);
        }
    }
    
    int numIslands(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis( n , vector<int> (m, 0));
        
        int ctr = 0;
        for (int i=0 ; i<n ; i++){
            for (int j=0 ; j<m ; j++){
                if (!vis[i][j] and grid[i][j] == 1){
                    dfs(i, j, vis, grid);
                    ctr++;
                }
            }
        }
        return ctr;
    }

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n, vector<int> (m, 0));
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<m ; j++){
            cin >> adj[i][j];
        }
    }

    int ans = numIslands(adj);
    cout << ans << "\n";
    return 0;
}