//le8.2
//pointer to array of objects
#include<bits/stdc++.h>
using namespace std;

class Item{
    int itNo;
    float price;
    public:
      void getData(int i, int p){
          itNo = i;
          price = p;
      }
      void displayInfo(){
          cout << "Item No : " << itNo << " " << "Price : " << price << endl;
      }
};

int main(){
    Item *I1 = new Item[5];
    Item *ptr = I1;
    int it;
    float pr;
    for (int i=0 ; i<5 ; i++){
        cout << "Enter the item number and price of item " << i+1 << ": ";
        cin >> it >> pr;
        I1->getData(it, pr);
        I1++;
    }
    for (int i=0 ; i<5 ; i++){
        cout << "Item " << i+1 << "-> ";
        ptr->displayInfo();
        ptr++;
    }
    return 0;
}