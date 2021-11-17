//le5.2
//complex number addition with constructor overloading
#include<bits/stdc++.h>
using namespace std;

class Complex{
    int real;
    int imaginary;
    public:
      Complex(){
          real = 0;
          imaginary = 0;
      }
      Complex(int r, int i){
          real = r;
          imaginary = i;
      }
      friend Complex addComplex(Complex c1, Complex c2){
          Complex c3;
          c3.real = c1.real + c2.real;
          c3.imaginary = c1.imaginary + c2.imaginary;
          return c3;
      }
      void display(){
          cout << real << "+" << imaginary << "i" << endl;
      }
};

int main(){
    Complex c1(3,4);
    Complex c2(4,5);
    Complex c3;

    c3 = addComplex(c1, c2);
    c3.display();
    return 0;
}