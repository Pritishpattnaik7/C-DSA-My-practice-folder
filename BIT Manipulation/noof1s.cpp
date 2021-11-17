#include <iostream>
using namespace std;

int noof1s(int n)
{
    int ctr = 0;
    while(n!=0)
    {
        n = n & (n-1);
        ctr++;
    }
    return ctr;
}

int main()
{
    cout << noof1s(19) << endl;
    return 0;
}