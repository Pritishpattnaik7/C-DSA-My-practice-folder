//variation of LIS 4
//building bridges
#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b){
    if (a.first == b.first)
      return a.second < b.second;
    else 
      return a.first < b.first;  
}

int main(){
    vector<pair<int, int>> vi = {{6,2} , {4,3} , {2,6} , {1,5} , {1,3}};
    sort(vi.begin(), vi.end(), comp);
    int n=5;
    vector<int> lis(n,1);
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<i ; j++){
            if (vi[j].second < vi[i].second)
              lis[i] = max(lis[i] , lis[j]+1);
        }
    }
    int res = lis[0];
    for (int i=0 ; i<n ; i++){
        res = max(res, lis[i]);
    }

    cout << res;
    return 0;
}

//testcases
//{8,1}, {1,2}, {4,3}, {3,4}, {2,6}, {6,7}, {7,8}, {5,5}  
//{6,2} , {4,3} , {2,6} , {1,5} , {1,3}  