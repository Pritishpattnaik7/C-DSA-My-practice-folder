#include <bits/stdc++.h>
using namespace std;

class student{
public:    
    string name;
    int rollno;
    long phno;
    
};

int main(){
    student rohn, john;
    cout << "Enter name of 1st student : ";
    cin >> rohn.name;
    cout << "Enter the roll number of 1st student : ";
    cin >> rohn.rollno;
    cout << "Enter the phone number of 1st student : ";
    cin >> rohn.phno;
    cout << "Enter name of 2nd student : ";
    cin >> john.name;
    cout << "Enter the roll number of 2nd student : ";
    cin >> john.rollno;
    cout << "Enter the phone number of 2nd student : ";
    cin >> john.phno;
    return 0;
}