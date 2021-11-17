#include <bits/stdc++.h>
using namespace std;

int a = 2; //global variable

int main(){
    int a = 7;  //local variable
    cout << "Local variable : " << a << endl;
    cout << "Global variable : " << ::a << endl;
    return 0;
}