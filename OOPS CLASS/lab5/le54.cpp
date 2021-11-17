//le 5.4
#include<bits/stdc++.h>
using namespace std;

class Time{
    int hr;
    int min;
    int sec;

    public:
    Time(){
        hr = 0;
        min = 0;
        sec = 0;
    }
    Time(int h, int m, int s){
        hr = h;
        min = m;
        sec = s;
    }
    Time addTimes(Time t){
        Time temp;
        temp.sec = sec+t.sec;
        temp.min = min+t.min;
        temp.hr = hr+t.hr;
        if (temp.sec >= 60){
            temp.min++;
            temp.sec -= 60;
        }
        if (temp.min >= 60){
            temp.hr++;
            temp.min -= 60;
        }
        return temp;
    }
    void display(){
        cout << hr <<"hr " << min <<"min " <<sec<<"sec" << endl;
    }
};

int main(){
    Time t1(4,30,30);
    Time t2(2, 30, 30);
    Time t3;
    t3 = t1.addTimes(t2);
    t3.display();
    return 0;
}