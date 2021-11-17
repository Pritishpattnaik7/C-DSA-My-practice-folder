//home exercise q4
#include<bits/stdc++.h>
using namespace std;
class B;
class A{
    int x;
    public:
      void get(int n1){
          x = n1;
      }
      void display(){
          cout << x << " ";
      }
      friend void swap(A &, B &);
};

class B{
    int y;
    public:
      void get(int n2){
          y = n2;
      }
      void display(){
          cout << y << " ";
      }
      friend void swap(A &, B &);
};

void swap(A &a, B &b){
     int temp = a.x;
     a.x = b.y;
     b.y = temp;
}

int main(){
    int num1, num2;
    cout << "Enter 2 numbers : ";
    cin >> num1 >> num2;
    A a11;
    B b11;
    a11.get(num1);
    b11.get(num2);

    swap(a11, b11);
    a11.display();
    b11.display();
    return 0;
}