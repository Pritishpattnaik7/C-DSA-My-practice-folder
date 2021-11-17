//q4.5
#include<bits/stdc++.h>
using namespace std;
class DB;
class DM{
    float meter;
    float centimeter;
    public:
      void getData(int m, int cm){
          meter = m;
          centimeter = cm;
      }
      void display(){
          cout << "the distance is : ";
          cout << meter << " meters and " << centimeter << " centimeters";
      }
      friend void addDist(DM , DB);
};

class DB{
    float feet;
    float inch;
    public:
      void getData(int f, int i){
          feet = f;
          inch = i;
      }
      void display(){
          cout << "the distance is : ";
          cout << feet << " feets and " << inch << " inches";
      }
      friend void addDist(DM , DB);
};

void addDist(DM a, DB b){
    int choice;
    cout << "1.meters and centimeters" << endl;
    cout << "2.feets and inches" << endl;
    cout << "Enter choice : ";
    cin >> choice;
    if (choice == 1){
        DM d1;
        int res = (a.meter*100 + a.centimeter + b.feet*30.48 + b.inch*2.54);
        if (res >= 100){
            d1.meter = res/100;
            d1.centimeter = res%100;
        }
        else {
            d1.meter = 0;
            d1.centimeter = res;
        }
        d1.display();
    }
    else if (choice == 2){
        DB d2;
        int ans = (a.meter*39.37 + a.centimeter*.3937 + b.feet*12 + b.inch);
        if (ans >= 12){
           d2.feet = ans/2;
           d2.inch = ans%2;
        }
        else {
            d2.feet = 0;
            d2.inch = ans;
        }
        d2.display();
    }
}

int main(){
    int m, cm;
    cout << "Enter the distance in meters and centimeters : ";
    cin >> m >> cm;
    DM a11;
    a11.getData(m, cm);

    int ft, in;
    cout << "Enter the distance in feets and inches : ";
    cin >> ft >> in;
    DB b11;
    b11.getData(ft, in);

    addDist(a11, b11);
    return 0;
}