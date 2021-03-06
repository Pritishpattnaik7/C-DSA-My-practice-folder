#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int target; cin>>target;
    
    vector <int> a(n);
    for (auto &i : a)
      cin >> i;
    bool found = false;
    sort(a.begin() , a.end());

    for (int i=0 ; i<n ; i++){
        int low = i+1;
        int high = n-1;
        while (low < high)
        {
            int currsum = a[i] + a[low] + a[high];
            if (currsum == target){
                found = true;
            }
            if (currsum < target){
                low++;
            }
            else{
                high--;
            }
        }
        
    }
    if (found){
        cout << "True\n";
    }
    else {
        cout << "False\n";
    }
    return 0;
}