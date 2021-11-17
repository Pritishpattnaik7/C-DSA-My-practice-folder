//Minimum cost to join the ropes
#include <bits/stdc++.h>
using namespace std;

int minCost(int arr[], int n){
    if (n == 1) return 0;
    priority_queue<int, vector<int>, greater<int>> pq;  //min heap
    for (int i=0 ; i<n ; i++)
      pq.push(arr[i]);
    int ans = 0;
    while (pq.size() > 1){
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();
        ans += (x+y);
        pq.push(x+y);
    }  
    return ans;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0 ; i<n ; i++)
      cin >> arr[i];
    
    int res = minCost(arr, n);
    cout << "Minimum cost is : " << res << endl;
    return 0;
}