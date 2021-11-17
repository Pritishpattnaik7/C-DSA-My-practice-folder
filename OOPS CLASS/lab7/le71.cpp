//le 7.1
//urnary operator overloading - member function
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
      void operator -(){
          i = -i;
          j = -j;
      }
};

int main(){
    ABC a1(20 , -50);
    -a1;
    a1.display();
    return 0;
}