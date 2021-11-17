#include<bits/stdc++.h>
using namespace std;

class time{
    int hr;
    int min;
    int sec;

    public:

    void getTime(int h, int m, int s){
        hr = h;
        min = m;
        sec = s;
    }
    time addTimes(time t){
        time temp;
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
    class time t1, t2, t3;
    t1.getTime(4,30,30);
    t2.getTime(2,30,30);
    t3 = t1.addTimes(t2);
    t3.display();
    return 0;
}