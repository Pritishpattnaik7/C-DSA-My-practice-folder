#include <bits/stdc++.h>
using namespace std;

class product{

    string code;
    string name;
    float price;
    float quantity;
    float total;

    public:

    void getData()
    {
        cout<<"Enter the code: ";
        cin>>code;
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the quantity: ";
        cin>>quantity;
        cout<<"Price: ";
        cin>>price; 
        total = price*quantity;  
    }
    
    void showinfo(int i,int &t)
    {
        t+=total;
        cout<<"   "<<i+1<<"\t  "<<code<<"      "<<name<<"\t\t "<<price<<"       "<<quantity<<"\t  "<<total<<"\n";
    }    
};

int main(){
    class product p1,p2;
    int d=1,size=0,total=0;
    cout<<"For product 1: \n";
    p1.getData();
    cout<<"For prodcut 2: \n";
    p2.getData();
    cout<<"\nSl. No.    Code\t\tName\t\tPrice  Quantity  Total\n";
    cout<<"--------------------------------------------------------------\n";
    p1.showinfo(0,total);
    p2.showinfo(1,total);
    cout<<"--------------------------------------------------------------\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTotal: "<<total<<"\n";
    return 0;
}
