//Fractional Knapsack
#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pair>
#define rep(i,a,b) for(int i=a ; i<b ; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

struct Item{
    int value;
    int weight;
};

bool comp(Item a, Item b){
    double r1 = (double)a.value/a.weight;
    double r2 = (double)b.value/b.weight;
    return r1>r2;
}

double fknapsack(int wt, vector<Item> v, int n){
    sort(v.begin(), v.end(), comp);
    double res = 0.0;
    int cur_cap = wt;
    for (int i=0 ; i<n ; i++){
        if (v[i].weight <= cur_cap){
            res += v[i].value;
            cur_cap -= v[i].weight;
        }
        else {
            res += v[i].value*((double)cur_cap/v[i].weight);
            break;
        }
    }
    return res;
}

int32_t main(){
    
    int n, wt;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "Enter the capacity of the knapsack : ";
    cin >> wt;

    cout << "Enter the values and weights : \n";
    vector<Item> v(n);
    rep(i,0,n){
        cin >> v[i].value >> v[i].weight;
    }

    double maxprofit = fknapsack(wt, v, n);
    cout << "The maximum profit is : " << maxprofit;
    return 0;
}