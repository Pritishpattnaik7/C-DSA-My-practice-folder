//count the number of path possible from start to end point in a boardgame
#include <bits/stdc++.h>
using namespace std;

int countPath(int start , int end)
{
    if (start == end)
    {
        return 1;
    }
    if (start > end)
    {
        return 0;
    }

      int ctr=0;   
    for (int i=1 ; i<=6 ; i++)
    {
        ctr += countPath(start+i , end);
    }
    return ctr;
}

int main()
{
    cout << countPath(0,3) << endl;
    return 0;
}