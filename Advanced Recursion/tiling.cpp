//given a 2xn board and tiles of size 2x1 , count the number of ways to place the tiles in the board
#include <bits/stdc++.h>
using namespace std;

int tilingWays(int n)
{
    if (n == 0)
    {
        return n;
    }
    if (n == 1)
    {
        return 1;
    }

    return tilingWays(n-1) + tilingWays(n-2);
}

int main()
{
    cout << tilingWays(4) << endl;
    return 0;
}