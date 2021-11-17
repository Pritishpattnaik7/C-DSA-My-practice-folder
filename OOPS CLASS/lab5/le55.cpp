//le 5.5
#include<bits/stdc++.h>
using namespace std;

class xyz{
    int a, b, c;
    public:
      xyz(int m, int n, int p){
          a = m;
          b = n;
          c = p;
      }
      //copy constructor
      xyz(xyz &x1){
          a = x1.a;
          b = x1.b;
          c = x1.c;
      }
      void display(){
          cout << a << " " << b << " " << c << endl;
      }
};

int main(){
    xyz x11(1,2,3);
    xyz x22(4,5,6);
    xyz x33(x22);
    xyz x44(x11);
    
    cout << "Display for x22 obj : ";
    x22.display();
    cout << "Display for x33 obj : ";
    x33.display();

    cout << "Display for x11 obj : ";
    x11.display();
    cout << "Display for x44 obj : ";
    x44.display();
    return 0;
}