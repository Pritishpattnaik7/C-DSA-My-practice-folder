//le 7.5
//addition and multiplication of 2 complex numbers - member function
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
      Complex operator +(Complex c){
          Complex temp;
          temp.real = real + c.real;
          temp.imaginary = imaginary + c.imaginary;
          return temp;
      }
      Complex operator *(Complex c){
          Complex temp;
          temp.real = (real * c.real) - (imaginary * c.imaginary);
          temp.imaginary = (real * c.imaginary) + (imaginary * c.real);
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