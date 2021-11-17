#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){

    int a, b;
    cout << "Enter 2 numbers : ";
    cin >> a >> b;
    swap(a,b);
    cout << "After swaping : ";
    cout << a << " " << b << endl;
}