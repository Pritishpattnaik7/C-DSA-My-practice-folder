//move all x to the end of the string
#include <bits/stdc++.h>
using namespace std;

string moveallX(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string ans = moveallX(s.substr(1));

    if (ch == 'x')
    {
        return (ans + ch);
    }
    else
    {
        return (ch + ans);
    }
    
}

int main()
{
    cout << moveallX("abcxtufxxhgxgfxccdrxkkip") << endl;
    return 0;
}