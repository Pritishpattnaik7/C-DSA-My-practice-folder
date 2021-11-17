#include <iostream>
using namespace std;

double e(int x , int n)
{
    double s=1;
    double num=1;
    double dem=1;
    for (int i=1; i<=n; i++)
    {
        num = num*x;
        dem = dem*i;
        s = s+num/dem;
    }
return s;    

}
int main()
{
    cout<<e(1,10);
    return 0;
}