//overloading of extraction and insertion operator
#include<bits/stdc++.h>
using namespace std;

class XYZ{
    int p, q;
    public:
      XYZ(int a, int b){
          p = a;
          q = b;
      }
      friend void operator << (ostream &o1, XYZ x11){
          o1 << x11.p;
          o1 << x11.q;
      }
};

int main(){
    XYZ X1(3, 4);
    cout << X1;
    return 0;
}