//Array implementation operations using Queue 
#include <bits/stdc++.h>
using namespace std;

#define n 50

class Queue{
    int* arr;
    int front;
    int back;

    public:
      Queue(){
          arr = new int[n];
          front = -1;
          back = -1;
      }

      void push(int x){                                           //enqueue
          if (back == n-1){
              cout << "Queue Overflowed!!!";
              return;
          }
          else{
              back++;
              arr[back] = x;
          }
          if (front == -1){
              front++;
          }
      }

      void pop(){                                                  //dequeue
          if (front == -1 || front>back){
              cout << "No elements in queue";
              return;
          }
          front++;
      }

      int peek(){
          if (front == -1 || front>back){
              cout << "No elements in queue";
              return -1;
          }
          return arr[front];
      }

      bool empty(){
          if (front == -1 || front>back){
              return true;
          }
          return false;
      }
};

int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

    if (q.empty()){
        cout << "Queue is empty..." << endl;
    }
    return 0;
}