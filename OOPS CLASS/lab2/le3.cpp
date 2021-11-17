#include<bits/stdc++.h>
using namespace std;

float Area_Vol(float r){
    return ((4*3.14*r*r*r)/3);
}

float Area_Vol(int r1){
    return (3.14*r1*r1);
}

int main(){
    int r1;
    float r;
    cout << "Enter the radius for the area of the circle : ";
    cin >> r1;
    cout << "Enter the radius for the volume of the sphere : ";
    cin >> r;
    float area , vol;
    area = Area_Vol(r1);
    vol = Area_Vol(r);
    cout << "The area of the circle is : " << area << endl;
    cout << "The volume of the sphere is : " << vol << endl;
    return 0;
}