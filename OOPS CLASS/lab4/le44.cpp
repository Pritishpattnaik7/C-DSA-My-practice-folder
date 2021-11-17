//q4.4
#include<bits/stdc++.h>
using namespace std;

class Complex{
    int real;
    int imaginary;
    public:
      void getData(int r, int i){
          real = r;
          imaginary = i;
      }
      void display(){
          cout << real << "+" << imaginary << "i";
      }
      friend Complex addComplex(Complex c1, Complex c2){
        Complex t;
        t.real = c1.real + c2.real;
        t.imaginary = c1.imaginary + c2.imaginary;
        return t;
    }
};

int main(){
    Complex c1, c2, c3;
    int a, b, c, d;
    cout << "Enter the real and imaginary part of 1st complex number : ";
    cin >> a >> b;
    cout << "Enter the real and imaginary part of 2nd complex number : ";
    cin >> c >> d;
    c1.getData(a, b);
    c2.getData(c, d);
    c3 = addComplex(c1, c2);
    c3.display();
    return 0;
}