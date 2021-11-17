//le6.3
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

class Cylinder : public Circle{
    int h;
    public:
      void getCylin(int rad, int ht){
          r = rad;
          h = ht;
      }
      double volCylin(){
          return (3.14*r*r*h);
      }
};

int main(){
    Reactangle R1, R2;
    R1.getRect(2,3);
    R2.getCir(5);
    int rect_area = R1.areaRect();
    double cir_area = R2.areaCir();

    Cylinder C1, C2;
    C1.getCir(3);
    C2.getCylin(4,8);
    double cir_area1 = C1.areaCir();
    double cylin_vol = C2.volCylin();

    cout << "rectangle area by rectangle object : " << rect_area << endl;
    cout << "circle area by rectangle object : " << cir_area << endl;
    cout << "circle area by cylinder object : " << cir_area1 << endl;
    cout << "cylinder volume by cylinder object : " << cylin_vol << endl;
    return 0;
}