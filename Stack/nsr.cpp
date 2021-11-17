//Next smaller element to the right  O(n)
#include <bits/stdc++.h>
using namespace std;

void printNSR(int arr[] , int n){
    vector <int> v;
    stack <int> s;
    for (int i=n-1 ; i>=0 ; i--){
        if (s.empty() == true){
            v.push_back(-1);
        }
        else if (s.empty() == false && s.top()<arr[i]){
            v.push_back(s.top());
        }
        else if (s.empty() == false && s.top()>=arr[i]){
            while (s.empty() == false && s.top()>=arr[i]){
                s.pop();
            }
            if (s.empty() == true){
                v.push_back(-1);
            }
            else{
                v.push_back(s.top());
            }
        }
        s.push(arr[i]);
    }
    reverse(v.begin() , v.end());                            //reverse required
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

    printNSR(arr,n);

    return 0;
}