#include <bits/stdc++.h>
using namespace std;

struct student{
    string name;
    long rollno;
    string branch;
    int totmarks;
} s;

int main(){
    cout << "Enter the name of student : ";
    getline(cin, s.name);
    cout << "Enter the roll number  of student : ";
    cin >> s.rollno;
    cout << "Enter the branch : ";
    cin >> s.branch;
    cout << "Enter the total marks : ";
    cin >> s.totmarks;

    cout << "Name : " << s.name << endl;
    cout << "Roll number : " << s.rollno << endl;
    cout << "Branch : " << s.branch << endl;
    cout << "total marks : " << s.totmarks << endl;
    return 0;
}