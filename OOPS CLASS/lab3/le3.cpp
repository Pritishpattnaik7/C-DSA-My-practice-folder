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
    Complex addComplex(Complex c1, Complex c2){
        Complex ans;
        ans.real = c1.real+c2.real;
        ans.imaginary = c1.imaginary + c2.imaginary;
        return ans;
    }
    void display(){
        cout << real << "+" << imaginary <<"i" << endl;
    }
};

int main(){
    Complex c1, c2, c3;
    c1.getData(4,2);
    c2.getData(6,7);
    c3 = c3.addComplex(c1, c2);
    cout << "sum = ";
    c3.display();
    return 0;
}