#include <bits/stdc++.h>
using namespace std;

void stockSpan(int arr[] , int n){
    vector <int> v;
    stack < pair<int , int> > s;                     //stack of pair type for storing its element and its index
    for (int i=0 ; i<n ; i++){
        if (s.empty() == true){
            v.push_back(-1);
        }
        else if (s.empty() == false && s.top().first>arr[i]){
            v.push_back(s.top().second);
        }
        else if (s.empty() == false && s.top().first<=arr[i]){
            while (s.empty() == false && s.top().first<=arr[i]){
                s.pop();
            }
            if (s.empty() == true){
                v.push_back(-1);
            }
            else{
                v.push_back(s.top().second);
            }
        }
        s.push({arr[i] , i});
    }
    for (int i=0 ; i<v.size() ; i++){
        v[i] = i-v[i];
    }
    for (int i=0 ; i<v.size() ; i++){
        cout << v[i] << " ";
    }
}

int main()
{
    int n;
    cout << "enter the size of the array : ";
    cin>>n;
    int arr[n];
    for (int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    
    stockSpan(arr,n);
    return 0;
}