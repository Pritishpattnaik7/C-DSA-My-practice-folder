//le 7.3
//overloading ++ & -- operator - member function
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
      void operator ++(){
          i = i+2;
          j = j+2;
      }
      void operator --(){
          i = i-1;
          j = j-1;
      }
};

int main(){
    ABC a1(8, 6);
    ++a1;
    a1.display();
    
    --a1;
    a1.display();
    return 0;
}