#include <iostream>                          //josephus problem or game of death circle
using namespace std;

int jos(int n,int k)
{
    if (n==1)
      return 0;
    int x,y;
    x = jos(n-1,k);
    y = (x+k)%n;
    return y;  
}

int main()
{
    int nop,pok;                             //nop- number of player & pok- position of kill
    cout<<"enter number of players : ";
    cin>>nop;
    cout<<"enter the position of kill : ";
    cin>>pok;
    cout<<"the survivor is at position : "<<jos(nop,pok);
    return 0;
}