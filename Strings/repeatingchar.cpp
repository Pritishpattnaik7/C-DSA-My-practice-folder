//maximum repeating character with frequency
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s = "fdhjsdkfffaastyuf";
    int freq[26];

    for (int i=0 ; i<26 ; i++)
    {
        freq[i] = 0;
    }

    for (int i=0 ; i<s.size() ; i++)
    {
        freq[s[i] - 'a']++;
    }

    char ans = 'a';
    int maxfreq = 0;

    for (int i=0 ; i<26 ; i++)
    {
        if (freq[i] > maxfreq)
        {
            maxfreq = freq[i];
            ans = i + 'a';
        }
    }

    cout << ans <<" ---> "<< maxfreq << endl;
    return 0;
}