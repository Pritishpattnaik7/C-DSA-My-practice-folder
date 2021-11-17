#include <bits/stdc++.h>
using namespace std;

struct job{
    int deadline;
    int profit;
};

bool comp(job a, job b){
    return a.profit > b.profit;
}

int jobScheduling(job arr[], int n){
    sort(arr, arr+n, comp);
    bool done[n] = {0};
    int profit = 0;
    for (int i=0 ; i<n ; i++){
        for (int j = min(n, arr[i].deadline-1) ; j>=0 ; j--){
            if (done[j] == false){
                profit += arr[i].profit;
                done[j] = true;
                break;
            }
        }
    }
    return profit;
}

int32_t main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    job arr[n];
    cout << "Enter the profit and the deadline : \n";
    for (int i=0 ; i<n ; i++){
        cin >> arr[i].profit >> arr[i].deadline;
    }

    int maxprofit = jobScheduling(arr, n);
    cout << "The maximum profit is : " << maxprofit << endl;
    return 0;
}