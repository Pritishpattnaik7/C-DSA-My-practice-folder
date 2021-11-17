//q4.1
#include<bits/stdc++.h>
using namespace std;

class rectangle{
    int length;
    int breadth;
    public:
      friend int farea(rectangle r){
        return (r.length * r.breadth);
    }
      void get(int l, int b){
          length = l;
          breadth = b;
      } 
      int area(){
         return (length*breadth);
      }
};

int main(){
    int l , b;
    cout << "Enter the length and breadth : ";
    cin >> l >> b;
    rectangle r1;
    r1.get(l, b);

    //by member function
    int arearect = r1.area();
    cout << "Area is : " << arearect << endl;

    //by friend function
    int friendarea = farea(r1);
    cout << "Area by friend function is : " << friendarea;
    return 0;
}