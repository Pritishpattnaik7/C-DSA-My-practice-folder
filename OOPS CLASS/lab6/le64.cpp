//le6.4
#include<bits/stdc++.h>
using namespace std;

class Student{
    protected:
    string name;
    int rollno;
};

class Exam : virtual public Student{
    int e_grade;
};

class Sports : virtual public Student{
    int s_grade;
};

class Results : public Exam, public Sports{
    
};

int main(){

    return 0;
}