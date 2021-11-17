#include <bits/stdc++.h>
using namespace std;

int Absolute(int n){
    return abs(n);
}

float Absolute(float n1){
    return abs(n1);
}

int main(){
    float n;
    cin >> n;
    float res = Absolute(n);
    cout << res << endl;
    return 0;
}