#include<bits/stdc++.h>
using namespace std;

class validateEmail{
    string email;
    public:
      void getEmail(string e){
          email = e;
      }
      void checkEmail(){
          int ctr = 0;
          for (int i=0 ; i<email.size() ; i++){
              if (email[i] == '@'){
                  ctr++;
              }
          }
          if (ctr == 0)
            cout << "Invalid email\n";
          else{
              int s = email.size();
              if (email[s-1] == 'm' && email[s-2] == 'o' && email[s-3] == 'c' && email[s-4] == '.'){
                  cout << "Valid email\n";
              }
              else{
                  cout << "Invalid email\n";
              }
          }  
      }
};

int main(){
    string str = "pritishpattnaik7@gmail.com";
    validateEmail E1;
    E1.getEmail(str);
    E1.checkEmail();
    return 0;
}