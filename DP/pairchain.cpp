//variation of LIS 5
//longest chain of pairs
#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> a , pair<int, int> b){
    return a.first < b.first;
}

int main(){
    vector<pair<int, int>> v = {{5,24} , {39,60} , {15,28} , {27,40} , {50,90}};
    sort(v.begin() , v.end() , comp);
    int n=5;
    vector<int> lis(n,1);
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<i ; j++){
            if (v[j].second < v[i].first)
              lis[i] = max(lis[i] , lis[j]+1);
        }
    }
    int res = 0;
    for (int i=0 ; i<n ; i++){
        res = max(res, lis[i]);
    }
    cout << "length of chain : " << res;
    return 0;
}