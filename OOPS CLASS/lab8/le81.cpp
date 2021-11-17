//le8.1
//pointer to object
#include<bits/stdc++.h>
using namespace std;

class Item{
    int itNo;
    float price;
    public:
      Item (int i, int p){
          itNo = i;
          price = p;
      }
      void displayInfo(){
          cout << "Item No : " << itNo << " " << "Price : " << price << endl;
      }
};

int main(){
    //by pointer to object
    Item I1(23, 150);
    Item *ptr = &I1;
    (*ptr).displayInfo();

    //by normal object
    Item I2(4, 80);
    I2.displayInfo();
    return 0;
}