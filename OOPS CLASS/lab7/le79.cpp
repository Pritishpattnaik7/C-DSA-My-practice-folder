//overloading of extraction and insertion operator
#include<bits/stdc++.h>
using namespace std;

class Player{
    int pno;
    string pname;
    int pscore;
    public:
      friend void operator >> (istream &in, Player &P11){
          in >> P11.pno;
          in >> P11.pname;
          in >> P11.pscore;
      }
      friend void operator << (ostream &o, Player P11){
          o << P11.pno << endl;
          o << P11.pname << endl;
          o << P11.pscore << endl;
      }
};

int main(){
    Player P1, P2;
    cin >> P1;
    cin >> P2;
    cout << P1;
    cout << P2;
    return 0;
}