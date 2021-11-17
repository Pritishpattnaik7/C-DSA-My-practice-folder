//le6.2
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
    protected:
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

class Box : public Reactangle{
    int h;
    public:
    void getBox(int le, int br, int ht){
        r = le;
        b = br;
        h = ht;
    }
    int volBox(){
        return (r*b*h);
    }
};

int main(){
    Box B1;
    B1.getBox(4,5,6);
    int volume = B1.volBox();
    Box B2;
    B2.getCir(3);
    double cir_area = B2.areaCir();
    Box B3;
    B3.getRect(2,4);
    int rect_area = B3.areaRect();
    cout << "Volume : " << volume << endl;
    cout << "Circle area : " << cir_area << endl;
    cout << "Rectangle area : "  << rect_area << endl; 
    return 0;
}