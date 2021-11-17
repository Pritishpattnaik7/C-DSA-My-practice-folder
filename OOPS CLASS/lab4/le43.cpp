//q4.3
#include<bits/stdc++.h>
using namespace std;
class two;
class one{
    int n1;
    friend void large(one , two);
    public:
      void get(int x){
          n1 = x;
      }
};

class two{
    int n2;
    friend void large(one , two);
    public:
      void get(int y){
          n2 = y;
      }
};

void large(one o, two t){
    if (o.n1 > t.n2)
      cout << o.n1 << " is greater(of class one)";
    else 
      cout << t.n2 << " is greater(of class two)";  
}

int main(){
    int a, b;
    cout << "Enter two numbers : ";
    cin >> a >> b;
    one o11;
    two t11;
    o11.get(a);
    t11.get(b);

    large(o11, t11);
    return 0;
}