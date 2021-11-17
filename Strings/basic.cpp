#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    // cin>>str;
    // cout<<str;
    
    // string str1(5 , 'n');
    // cout<<str1;

    // string str1;
    // getline(cin , str1);               //for sentences
    // cout << str1 << endl;

    //append()
    // string str1 = "fam";
    // string str2 = "ily";
    // // str1.append(str2);                 //1st method 
    // cout << str1 + str2 << endl;           //2nd method

    //compare()
    // string s1 = "abc";
    // string s2 = "abc";
    // if (!s1.compare(s2))
    //   cout << "strings are equal";

    //empty()
    // string s1 = "abc";
    // cout << s1 <<endl;
    // s1.clear();
    // if (s1.empty())
    //   cout << "the string is empty";

    //erase()
    // string s1 = "nincompoop";
    // s1.erase(3 ,3);
    // cout << s1 << endl;

    //find()
    // string s1 = "nincompoop";
    // cout << s1.find("com");                  //returns the first position of the substring

    //insert()
    // string s1 = "nincompoop";
    // s1.insert(2 , "fuck");                      //adds the string before the entered position
    // cout << s1 <<endl;

    //reading each and every letter of the string
    // string s1 = "pritish";
    // for (int i=0 ; i<s1.size() ; i++)
    //   cout << s1[i] << endl;

    //substr()
    // string s1 = "nincompoop";
    // string s = s1.substr(6 , 4);                     //s1.substr(index , how many)
    // cout << s <<endl;

    //string to integer - stoi(string name)
    // string s1 = "786";
    // int x = stoi(s1);
    // cout << x+2 <<endl;

    //integer to string
    // int x = 786;
    // cout << to_string(x) + "2" << endl;                 //2 is appended

    //sorting a string (vimp) *requires header file -> #include <algorithm>
    string s1 = "dwgdwafhfioxzhcxh";
    sort(s1.begin() , s1.end());
    cout << s1 <<endl;

    return 0;
}