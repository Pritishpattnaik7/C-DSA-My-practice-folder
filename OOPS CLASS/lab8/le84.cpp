#include<bits/stdc++.h>
using namespace std;

class ABC{
    public:
    int a, b, c;
      void getData(int p, int q, int r){
          a = p;
          b = q;
          c = r;
      }
      void showData(){
          cout << a << " " << b << " " << c << endl;
      }
};

int main(){
    ABC *A1 = new ABC;
    int a = 2;
    A1->getData(10, 20, 30);
    cout << A1->a << endl;
    cout << a;

    //here the name of variable is same in both local and member of class ABC
    return 0;
}