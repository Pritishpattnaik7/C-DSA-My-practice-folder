//le 9.2
//function template
#include<bits/stdc++.h>
using namespace std;

template<class S>

void swap2var(S &a, S &b){
    S temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    //integer swapping
    int a = 2, b = 7;
    swap2var(a, b);
    cout << a << " " << b << endl;

    //float swapping
    float c = 3.5 , d = 8.2;
    swap2var(c, d);
    cout << c << " " << d << endl;

    //char swapping
    char ch1 = 'a' , ch2 = 'j';
    swap2var(ch1, ch2);
    cout << ch1 << " " << ch2 << endl;
    return 0;
}