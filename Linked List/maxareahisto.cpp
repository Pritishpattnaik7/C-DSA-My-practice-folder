//maximum rectangular area in the histogram      GFG
#include <bits/stdc++.h>
using namespace std;

void maxAreaHisto(int arr[] , int n){
    vector <int> left;
    stack <pair<int,int>> sfl;
    int pseudoindex = -1;
     for (int i=0 ; i<n ; i++){
        if (sfl.empty() == true){
            left.push_back(pseudoindex);
        }
        else if (sfl.empty() == false && sfl.top().first<arr[i]){
            left.push_back(sfl.top().second);
        }
        else if (sfl.empty() == false && sfl.top().first>=arr[i]){
            while (sfl.empty() == false && sfl.top().first>=arr[i]){
                sfl.pop();
            }
            if (sfl.empty() == true){
                left.push_back(pseudoindex);
            }
            else{
                left.push_back(sfl.top().second);
            }
        }
        sfl.push({arr[i],i});
    }

    pseudoindex = 7;
    vector <int> right;
    stack <pair<int,int>> sfr;
    for (int i=n-1 ; i>=0 ; i--){
        if (sfr.empty() == true){
            right.push_back(pseudoindex);
        }
        else if (sfr.empty() == false && sfr.top().first<arr[i]){
            right.push_back(sfr.top().second);
        }
        else if (sfr.empty() == false && sfr.top().first>=arr[i]){
            while (sfr.empty() == false && sfr.top().first>=arr[i]){
                sfr.pop();
            }
            if (sfr.empty() == true){
                right.push_back(pseudoindex);
            }
            else{
                right.push_back(sfr.top().second);
            }
        }
        sfr.push({arr[i],i});
    }
    reverse(right.begin(),right.end());

    vector <int> width;
    for (int i=0 ; i<n ; i++){
        width[i] = right[i] - left[i] - 1;
    }
    vector <int> area;
    for (int i=0 ; i<n ; i++){
        area[i] = arr[i]*width[i];
    }

    int maxArea = *max_element(area.begin(),area.end());
    cout << maxArea << endl;
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

    maxAreaHisto(arr,n);
    return 0;
}