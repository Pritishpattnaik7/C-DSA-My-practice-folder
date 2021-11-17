#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int s, n, m;
    cin >> s >> n >> m;
    int x = s/7;
    int y = s-x;
    int sm = s*m;
    int days = sm/n;
    if (sm%n != 0) days++;
    if (days <= y){
        cout << "YES" << " " << days;
    }
    else
      cout << "NO";
    return 0;
}