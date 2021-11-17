//reverse a string recursively!
#include <bits/stdc++.h>
using namespace std;

void reverse(string s)
{
    if (s.length() == 0)
    {
        return;                        //base case
    }
    string ros = s.substr(1);
    reverse(ros);
    cout << s[0];
}

int main()
{
    reverse("pritish");
    return 0;
}