#include<bits/stdc++.h>
using namespace std;

class student{
public:    
    string name;
    int rollno;
    int m1, m2, m3;
};

int main(){
    student s;
    cout << "Enter the student's name : ";
    getline(cin, s.name);
    cout << "Enter the student's roll number : ";
    cin >> s.rollno;
    cout << "Enter the mark 1 : ";
    cin >> s.m1;
    cout << "Enter the mark 2 : ";
    cin >> s.m2;
    cout << "Enter the mark 3 : ";
    cin >> s.m3;

    int tot = s.m1 + s.m2 + s.m3;
    double avg = (double)tot/3;
    cout << "Name : " << s.name << endl;
    cout << "Roll Number : " << s.rollno << endl;
    cout << "Mark 1 : " << s.m1 << endl;
    cout << "Mark 2 : " << s.m2 << endl;
    cout << "Mark 3 : " << s.m3 << endl;
    cout << "Total marks = " << tot << endl;
    cout << "Average = " << avg << endl;
    return 0;
}