//Median of a stream
#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pair>
#define rep(i,a,b) for(int i=a ; i<b ; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

void printMedian(vi &arr){
    priority_queue<int, vi> s;    //maxheap
    priority_queue<int, vi, greater<int>> g; //minheap

    s.push(arr[0]);
    cout << arr[0] << endl;

    for (int i=0 ; i<arr.size() ; i++){
        int x = arr[i];
        if (s.size() > g.size())
        {
            if (s.top() > x){
                g.push(s.top());
                s.pop();
                s.push(x);
            }
            else g.push(x);
            double median = (s.top() + g.top())/2.0;
            cout << median << endl;
        }
        else
        {
            if (x <= s.top()){
                s.push(x);
            }
            else {
                g.push(x);
                s.push(g.top());
                g.pop();
            }
            cout << s.top() << endl;
        }
    }
}

int32_t main() {
    
    int n;
    cout << "enter the size : ";
    cin >> n;

    vi a(n);
    rep(i, 0, n)
      cin >> a[i];

    printMedian(a);
    cout << endl;  
    return 0;
}