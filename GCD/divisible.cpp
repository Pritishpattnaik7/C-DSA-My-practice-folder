//how many numbers between 1 to n are divisible by 2 numbers a and b
#include <iostream>
using namespace std;

int isdivisible(int n , int a , int b)
{
    int c1 = n/a;
    int c2 = n/b;
    int c3 = n/(a*b);      //divisible by both

    return (c1+c2-c3);
}

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    cout << isdivisible(n,a,b);
    return 0;
}