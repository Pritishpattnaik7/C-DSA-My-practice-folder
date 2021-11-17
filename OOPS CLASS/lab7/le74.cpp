//le 7.4
//overloading ++ & -- operator - friend function
#include<bits/stdc++.h>
using namespace std;

class ABC{
    int i, j;
    public:
      ABC(){
          i = 0;
        j = 0;
      }
      ABC(int p, int q){
          i = p;
          j = q;
      }
      void display(){
          cout << i << " " << j << endl;
      }
      friend void operator ++(ABC &a11){
          a11.i = a11.i + 2;
          a11.j = a11.j + 2;
      }
};

int main(){
    ABC a1(5, 9);
    ++a1;
    a1.display();
    return 0;
}
