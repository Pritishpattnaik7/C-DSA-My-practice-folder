#include <bits/stdc++.h>
using namespace std;

#define n 100

class stack{
    int* arr;
    int top;

    public: 
    stack(){
          arr = new int[n];
          top = -1;
    }
    void push(int x){
        if (top == n-1){
            cout << "Stack Overflow..." << endl;
            return;
        }
        top++;
        arr[top] = x;
    }
    void push(){
        if (top == -1){
            cout << "No element to be popped.\n";
            return;
        }
        top--;
    }
    int Top(){
        if (top == -1){
            cout << "No element in the stack\n";
            return;
        }
        return arr[top];
    }
    bool empty(){
        if (top == -1){
            return true;
        }
        return false;
    }

};

int main()
{
    return 0;
}