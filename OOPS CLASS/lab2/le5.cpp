#include <bits/stdc++.h>
using namespace std;

int Sum(int a, int b=10, int c=20){
    return (a+b+c);
}

void Sum(){
    cout << "Error!" << endl;
}

int main(){
    int a, b, c;
    cout << "Enter 3 numbers : ";
    cin >> a >> b >> c;
    int s1 = Sum(a, b, c);
    int s2 = Sum(a);
    int s3 = Sum(a,b);
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    Sum();   //no arguments passed, it will display error msg
    return 0;
}