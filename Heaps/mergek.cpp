//Merge k sorted arrays
#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pair>
#define rep(i,a,b) for(int i=a ; i<b ; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

struct Triplet{
    int val, aPos, vPos;
    Triplet(int v, int ap, int vp){
        val = v;
        aPos = ap;
        vPos = vp;
    }
};

struct MyComp{
    bool operator()(Triplet &t1, Triplet &t2){
        return t1.val > t2.val;
    }
};

vector<int> mergeArray(vector<vector<int>> &arr){
    vector<int> res;
    priority_queue <Triplet, vector<Triplet>, MyComp> pq;
    for (int i=0 ; i<arr.size() ; i++){
        Triplet t(arr[i][0], i, 0);
        pq.push(t);
    }
    while (pq.empty() == false){
        Triplet curr = pq.top();
        pq.pop();
        res.push_back(curr.val);
        
        int ap = curr.aPos;
        int vp = curr.vPos;
        if (vp+1 < arr[ap].size()){
            Triplet t(arr[ap][vp+1], ap, vp+1);
            pq.push(t);
        }
    }
    return res;
}

int32_t main(){
    
    int k;
    cout << "Enter k : ";
    cin >> k;

    vector<vector<int>> a(k);

    rep(i, 0, k)
    {
        int size;
        cout << "Enter the size : ";
        cin >> size;
        
        a[i] = vector<int>(size);
        rep(j, 0, size)
        {
            cin >> a[i][j];
        }
    }

    vector<int> res = mergeArray(a);
    
    cout << "Sorted array : ";
    rep(i, 0, res.size())
      cout << res[i] << " ";
    cout << endl;  
    return 0;
}