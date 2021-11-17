//dynamic constructor(concatenate 2 strings)
#include <bits/stdc++.h>
using namespace std;

class xyz{
    int s;
    char *name;
    public:
      xyz(){
          s = 0;
          name = new char[s+1];
      }
      xyz(char *p){
          s = strlen(p);
          name = new char[s+1];
          strcpy(name, p);
      }
      void concat(xyz x22, xyz x33){
          s = x22.s + x33.s;
          name = new char[s+1];
          strcpy(name, x22.name);
          strcat(name, x33.name);
          cout << name;
      }
};

int main(){
    char p1[10] = "hello";
    char p2[10] = "world";
    xyz x1;
    xyz x2(p1);
    xyz x3(p2);
    x1.concat(x2, x3);
}