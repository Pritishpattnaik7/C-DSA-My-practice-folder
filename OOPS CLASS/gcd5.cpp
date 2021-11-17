#include<bits/stdc++.h>
using namespace std;

int gcd(int n1, int n2){
    while(n2!=0){
        int r = n1%n2;
        n1 = n2;
        n2 = r;
    }
    return n1;
}

int main(){
    int n1, n2;
    cin >> n1 >> n2;
    cout << gcd(n1,n2) << endl;
    return 0;
}