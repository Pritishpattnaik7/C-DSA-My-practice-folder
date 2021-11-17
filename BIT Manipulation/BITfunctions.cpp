#include <iostream>
using namespace std;

int getBIT(int n , int pos)
{
    return ((n & (1 << pos)) != 0);
}

int setBIT(int n , int pos)
{
    return (n | (1 << pos));
}

int clearBIT(int n , int pos)
{
    int mask = ~(1 << pos);
    return (n & mask);
}

int updateBIT(int n , int pos , int val)             //combination of clearBIT and setBIT...first the position is cleared and bit is set.
{
    int mask = ~(1 << pos);
    n = n & mask;
    return (n | (val << pos));
}
int main()
{
    // cout << getBIT(5,2);
    // cout << setBIT(5,1) << endl;
    //cout << clearBIT(5,2) << endl;
    cout << updateBIT(5,1,1);
    return 0;
}