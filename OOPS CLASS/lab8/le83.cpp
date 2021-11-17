#include <bits/stdc++.h>
using namespace std;
 
class Base
{
    int a;
 
public:
    Base() { a = 0; }
    void baseInput()
    {
        cout << "Enter a: ";
        cin >> a;
    }
    void baseDisplay()
    {
        cout << "a in base class = " << a << "\n";
    }
};
 
class Derived : public Base
{
    int b;
 
public:
    Derived() { b = 0; }
    void derivedInput()
    {
        cout << "Enter b: ";
        cin >> b;
    }
    void derivedDisplay()
    {
        cout << "b in derived class = " << b << "\n";
    }
};
 
int main()
{
    Derived *obj = new Derived;
    //calling base class members
    obj->baseInput();
    obj->baseDisplay();

    //calling derrived class members
    obj->derivedInput();
    obj->derivedDisplay();
    return 0;
}