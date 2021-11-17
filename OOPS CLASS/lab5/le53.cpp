//le 5.3
#include<bits/stdc++.h>
using namespace std;

class Distance{
    int feets;
    int inches;
    public:
      Distance(){
          feets = 0;
          inches = 0;
      }
      Distance(int f, int i){
          feets = f;
          inches = i;
      }
      friend Distance addDist(Distance d1, Distance d2){
          Distance d3;
          d3.inches = d1.inches + d2.inches;
          d3.feets = d1.feets + d2.feets + (d3.inches/12);
          d3.inches = d3.inches%12;
          return d3;
      }
      void display(){
          cout << feets << " Feets" << " & " << inches << " Inches" << endl;
      }
};

int main(){
    int f1, i1, f2, i2;
    cout << "Enter the 1st distance : ";
    cin >> f1 >> i1;
    cout << "Enter the 2nd distance : ";
    cin >> f2 >> i2;
    
    Distance D1(f1, i1);
    Distance D2(f2, i2);
    Distance D3;

    D3 = addDist(D1, D2);
    D3.display();
    return 0;
}