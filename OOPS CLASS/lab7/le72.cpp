//le 7.2
//urnary operator overloading - friend function
#include<bits/stdc++.h>
using namespace std;

class XYZ{
    int a, b;
    public:
      XYZ(){
          a = 0;
          b = 0;
      }
      XYZ(int p, int q){
          a = p;
          b = q;
      }
      void display(){
          cout << a << " " << b << endl;
      }
      friend void operator +(XYZ &x11){
          x11.a = x11.a + 1;
          x11.b = x11.b + 1;
      }
};

int main(){
    XYZ x1(15, 8);
    +x1;
    x1.display();
    return 0;
}