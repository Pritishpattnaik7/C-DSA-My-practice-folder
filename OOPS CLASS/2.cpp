#include<bits/stdc++.h>
using namespace std;

bool check(int n1, int n2){
    return abs(n1 % 10) == abs(n2 % 10);
}

int main(){
    int n1, n2;
    cin >> n1 >> n2;
    if (check(n1,n2))
      cout << "Same last digit";
    else 
      cout << "Not same";  
    return 0;
}