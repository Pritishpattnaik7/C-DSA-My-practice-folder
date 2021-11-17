#include <bits/stdc++.h>
using namespace std;

void fillstacks(stack<int>s1 , vector<int>h1 , stack<int>s2 , vector<int>h2 , stack<int>s3 , vector<int>h3 ){
    int s1tot=0 , s2tot=0 , s3tot=0;
    for (int i=h1.size()-1 ; i>=0 ; i--){
        s1tot += h1[i];
        s1.push(s1tot);
    }
    for (int i=h2.size()-1 ; i>=0 ; i--){
        s2tot += h2[i];
        s2.push(s2tot);
    }
    for (int i=h3.size()-1 ; i>=0 ; i--){
        s3tot += h3[i];
        s3.push(s3tot);
    }
}
int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
    int maxheight = 0;
    stack <int> s1;
    stack <int> s2;
    stack <int> s3;
    
    fillstacks(s1,h1,s2,h2,s3,h3);
    
    while (!s1.empty() && !s2.empty() && !s3.empty()){
        int s1height = s1.top();
        int s2height = s2.top();
        int s3height = s3.top();
        
        if (s1height == s2height && s2height == s3height){
            maxheight = s1.top();
            break;
        }
        
        if (s1height > s2height && s1height > s3height){
            s1.pop();
        }
        else if (s2height > s1height && s2height > s3height){
            s2.pop();
        }
        else if (s3height > s1height && s3height > s2height){
            s3.pop();
        }
    }
    return maxheight;
}

int main()
{
    vector <int> v1;
    vector <int> v2;
    vector <int> v3;
    v1.push_back(3);
    v1.push_back(2);
    v1.push_back(1);
    v1.push_back(1);
    v1.push_back(1);
    
    v2.push_back(4);
    v2.push_back(3);
    v2.push_back(2);

    v3.push_back(1);
    v3.push_back(1);
    v3.push_back(4);
    v3.push_back(1);

    cout << equalStacks(v1,v2,v3) << endl;
    return 0;
}