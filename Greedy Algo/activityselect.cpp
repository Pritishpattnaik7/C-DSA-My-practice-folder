#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pair>
#define rep(i,a,b) for(int i=a ; i<b ; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

bool comp(pii a, pii b){
    return a.second < b.second;
}

int maxActivities(int start[], int end[], int n){
    vector<pair<int,int>> v(n);
    rep(i,0,n){
        v[i] = {start[i], end[i]};
    }
    sort(v.begin(), v.end(), comp);
    int i=0;
    int j=1;
    int ctr=1;
    while(j<n){
        if (v[i].second <= v[j].first){
            ctr++;
            i = j;
            j++;
        }
        else j++;
    }
    return ctr;
}

int32_t main(){
    int n;
    cout << "Enter the size : ";
    cin >> n;
    int start[n], end[n];

    cout << "Enter the start array : ";
    rep(i,0,n)
      cin >> start[i];
    cout << "Enter the end array : ";  
    rep(i,0,n)
      cin >> end[i];

    int max = maxActivities(start, end, n);
    cout << "The maximum activities are : " << max;
    return 0;
}