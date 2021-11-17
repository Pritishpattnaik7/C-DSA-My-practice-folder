#include<bits/stdc++.h>
using namespace std;

class triangle{
    int base;
    int height;
    public:
      void getdata(){
          cout <<"Enter the base and height : ";
          cin >> base >> height;
      }
      void areaTrin(){
          double a = 0.0;
          a = (0.5*base*height);
          cout << "Area = " << a;
      }
};

int main(){
    triangle t[3];
    for (int i=0 ; i<3 ; i++){
        cout << "Enter the data of triangle " << i+1 << endl;
        t[i].getdata();
    }
    for (int i=0 ; i<3 ; i++){
        t[i].areaTrin();
    }
    return 0;
}