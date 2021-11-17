//le 7.6
//addition and multiplication of 2 complex numbers - friend function
#include<bits/stdc++.h>
using namespace std;

class Complex{
    int real, imaginary;
    public:
      Complex(){
          real = 0;
          imaginary = 0;
      }
      Complex(int r, int i){
          real = r;
          imaginary = i;
      }
      void display(){
          cout << real << "+" << imaginary << "i" << endl;
      }
      friend Complex operator +(Complex &c1, Complex &c2){
          Complex temp;
          temp.real = c1.real + c2.real;
          temp.imaginary = c1.imaginary + c2.imaginary;
          return temp;
      }
      friend Complex operator *(Complex c1, Complex c2){
          Complex temp;
          temp.real = (c1.real * c2.real) - (c1.imaginary * c2.imaginary);
          temp.imaginary = (c1.real * c2.imaginary) + (c1.imaginary * c2.real);
          return temp;
      }
};

int main(){
    Complex c1(2, 1);
    Complex c2(3, 4);
    Complex c3;
    c3 = c1 + c2;
    c3.display();
    
    Complex c4;
    c4 = c1 * c2;
    c4.display();
    return 0;
}