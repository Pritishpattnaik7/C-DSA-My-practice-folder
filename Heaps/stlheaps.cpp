//priority queue - stl used for MAX heap
#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pair>
#define rep(i,a,b) for (int i=a ; i<b ; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

int32_t main()
{
    
    priority_queue <int, vector<int>> pq;
    pq.push(2);
    pq.push(3);
    pq.push(1);

    cout << pq.top() << "\n";

    pq.pop();
    cout << pq.top() << "\n";
    cout << endl;

    //declaring MIN heap using priority queue stl
    priority_queue <int, vector<int>, greater<int>> pqm;
    pqm.push(2);
    pqm.push(3);
    pqm.push(1);

    cout << pqm.top() << "\n";
    

    return 0;
}

//time complexity
// push - O(log(n))
// pop - O(log(n))
// top - O(1)
// size - O(1)