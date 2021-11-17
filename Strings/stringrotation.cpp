#include <bits/stdc++.h>
using namespace std;

bool rotation(string s1 , string s2)
{
    if (s1.length() != s2.length())
        return false;

    string temp = s1 + s2;
    if (temp.find(s2) == string::npos)
        return true;
    
}
int main()
{
    string str1 = "AACD" , str2 = "ACDA";
    if (rotation(str1 , str2))
    {
        cout << "strings are the rotation of each other." << endl;
    }
    else
    {
        cout << "strings are NOT the rotation of each other." <<endl;
    }
    
    return 0;
}