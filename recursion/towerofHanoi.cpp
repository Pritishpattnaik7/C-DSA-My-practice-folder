#include <iostream>
using namespace std;

void toh(int n,int a,int b,int c)
{
    if (n>0)
    {
        toh(n-1,a,c,b);
        cout<<"Move disk "<<n<<" from rod "<<a<<" to rod "<<c<<endl;
        toh(n-1,b,a,c);

    }
}

int main()
{
    toh(6,1,2,3);
    return 0;
}