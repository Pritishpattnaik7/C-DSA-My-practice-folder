//le6.1
#include<bits/stdc++.h>
using namespace std;

class Circle{
    protected:
      int r;
    public:
      void getCir(int rad){
          r = rad;
      }
      double areaCir(){
          return (3.14*r*r);
      }  
};

class Reactangle : public Circle{
    int b;
    public:
      void getRect(int len, int bre){
          r = len;
          b = bre;
      }
      int areaRect(){
          return (r*b);
      }

};

int main(){
    int r, l, b;
    cout << "Enter the radius of the circle : ";
    cin >> r;
    cout << "Enter the area of the rectangle : ";
    cin >> l >> b;
    Reactangle R1;
    R1.getCir(r);
    R1.getRect(l,b);
    double cir_area = R1.areaCir();
    int rect_area = R1.areaRect();
    cout << "The area of the circle is : " << cir_area << endl;
    cout << "The area of the rectangle is : " << rect_area << endl;
}