//constructor revision
#include<bits/stdc++.h>
using namespace std;

class xyz{
    int a, b, c;
    public:
      xyz(int x, int y, int z){
          a = x;
          b = y;
          c = z;
      }
      //copy constructor
      xyz(xyz &x11){
          a = x11.a;
          b = x11.b;
          c = x11.c;
      }
      void display(){
          cout << a << " " << b << " " << c << " " << "\n";
      }
};

int main(){
   xyz x1(2,3,6);
   xyz x2(6,8,9);
   xyz x3(x2);

   x1.display();
   x2.display();
   x3.display();
}