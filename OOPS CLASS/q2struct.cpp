#include<bits/stdc++.h>
using namespace std;

struct student{
    string name;
    int m1,m2,m3,m4,m5;
};

int main(){
    student s;
    for (int i=0 ; i<5 ; i++){
        cout << "Enter the marks of student : " << i+1 << endl;
        cin >> s.m1 >> s.m2 >> s.m3 >> s.m4 >> s.m5;
        int sum = 0;
        double avg = 0.0;
        sum = s.m1 + s.m2 + s.m3 + s.m4 + s.m5;
        avg = (double)(s.m1 + s.m2 + s.m3 + s.m4 + s.m5)/5;
        cout << "Sum = " << sum << " and Average = " << avg << endl;
    }
    return 0;
}