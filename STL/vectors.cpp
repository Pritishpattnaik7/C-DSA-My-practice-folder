#include <iostream>
#include <vector>
#include <numeric>      //for accumulate
using namespace std;

int main()
{
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for (int i=0 ; i<v.size() ; i++)
    {
        cout << v[i] << " ";
    }cout << endl;

    vector <int> :: iterator it;
    for (it=v.begin() ; it!=v.end() ; it++)
    {
        cout << *it << " ";
    }cout << endl;

    for (auto element : v)
    {
        cout << element << " ";
    }cout << endl;


    v.pop_back();
    for (auto element : v)
    {
        cout << element << " ";
    }cout << endl;

    vector <int> v2 (3,50);          //{50,50,50}
    swap(v,v2);
    for (auto element : v)
    {
        cout << element << " ";
    }cout << endl;

    for (auto element : v2)
    {
        cout << element << " ";
    }cout << endl;

    
    int sum = accumulate(v2.begin() , v2.end() , 0);
    cout << sum << endl;

    int sum1 = accumulate(v.begin() , v.end() , 0);
    cout << sum1 << endl;

    //2d vector of size nxm
    //initialized a grid with -1
    int n,m;
    vector <vector<int>> grid(n,vector<int>(m,-1));



    return 0;
}