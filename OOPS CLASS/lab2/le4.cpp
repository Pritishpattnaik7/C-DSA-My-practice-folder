#include <bits/stdc++.h>
using namespace std;

float FUN_AREA(int a){
    return (3.14*a*a);
}

int FUN_AREA(int a, int b){
    return (a*b);
}

int FUN_AREA(int a, int b, int c){
    return (a*b*c);
}

void FUN_AREA(){
    cout << "No arguments passes!\n";
}

int main(){
    int r, l, b, h;
    cout << "Enter the radius : ";
    cin >> r;
    cout << "enter the length, breadth, height : ";
    cin >> l >> b >> h;
    float circle = FUN_AREA(r);
    int rect = FUN_AREA(l, b);
    int box = FUN_AREA(l, b, h);
    cout << "Area of circle : " << circle << endl;
    cout << "Area of rectangle : " << rect << endl;
    cout <<"Volume of the box  : " << box << endl;
    FUN_AREA(); //will print the msg, as no argument is passed
    return 0;
}