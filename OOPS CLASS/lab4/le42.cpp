//q4,2
#include<bits/stdc++.h>
using namespace std;
class square;
class rectangle{
    int length;
    int breadth;
    friend void area(rectangle , square);
    public:
      void getData(int l, int b){
          length = l;
          breadth = b;
      }
};

class square{
    int side;
    friend void area(rectangle , square);
    public:
      void getData(int s){
          side = s;
      }
};

void area(rectangle r, square s){
    cout << "Rectangle's Area : " << (r.length * r.breadth) << endl;
    cout << "Square's Area : " << (s.side * s.side);
}

int main(){
    int l, b, s;
    cout << "Enter the length, breadth and side of rectangle and square : ";
    cin >> l >> b >> s;
    rectangle r11;
    square s11;
    r11.getData(l, b);
    s11.getData(s);

    area(r11, s11);
    return 0;
}