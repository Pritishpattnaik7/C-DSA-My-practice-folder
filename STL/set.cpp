#include <iostream>
#include <set>
using namespace std;

int32_t main(){
    
    set <int> s;
    s.insert(3);
    s.insert(2);
    s.insert(5);
    s.insert(1);
    s.insert(4);
    for (auto i : s)            //for each loop
      cout << i << " ";         //set prints the elements in ascending order by default irrespective of the order they are inserted
    cout << "\n";  

    for (auto i = s.begin() ; i != s.end() ; i++){       //another way of printing
        cout << *i << " ";
    }
    cout << "\n";

    cout << s.size() << "\n";

    //printing in descending order
    for (auto i = s.rbegin() ; i != s.rend() ; i++)
      cout << *i << " ";
    cout << "\n";

    //using custom comparator
    set <int , greater<int>> s1;         //prints in descending order
    s1.insert(4);
    s1.insert(5);
    s1.insert(6);
    for (auto i : s1)
      cout << i << " ";
    cout << endl; 

    //erase
    s.erase(4);
    s.erase(s.begin());
    for (auto i : s)
      cout << i << " ";
    cout << endl;   

    return 0;
}