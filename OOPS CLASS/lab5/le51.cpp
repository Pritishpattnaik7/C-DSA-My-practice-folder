//le5.1
#include<bits/stdc++.h>
using namespace std;

class Complex{
    int real;
    int imaginary;
    public:
      Complex(int r, int i){
          real = r;
          imaginary = i;
      }
      void addCompex(Complex c1, Complex c2){
          cout << (c1.real+c2.real) << "+" << (c1.imaginary+c2.imaginary) << "i" << endl;
      }
};

int main(){
    Complex c1(2,3);
    Complex c2(3,5);
    c1.addCompex(c1,c2);
    return 0;
}