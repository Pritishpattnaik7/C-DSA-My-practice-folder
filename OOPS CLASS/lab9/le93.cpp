//le 9.3
//function template
#include<bits/stdc++.h>
using namespace std;

template<class T>

void searchEle(T arr[], int n, T key){
    int flag = 0;
    int pos;
    for (int i=0 ; i<n ; i++){
        if (key == arr[i]){
            flag = 1;
            pos = i;
        }
    }
    if (flag == 1){
        cout << "Element found at pos : " << pos << endl; 
    }
    else{
        cout << "Element NOT found!" << endl;
    }
}

int main(){
    int n;
    cin >> n;
    
    //integer array
    int arr_int[n];
    for (int i=0 ; i<n ; i++){
        cin >> arr_int[i];
    }
    int key_int;
    cin >> key_int;
    searchEle(arr_int, n, key_int);

    //char array
    char arr_char[n];
    for (int i=0 ; i<n ; i++){
        cin >> arr_char[i];
    }
    char key_char;
    cin >> key_char;
    searchEle(arr_char, n, key_char);

    //double array
    double arr_double[n];
    for (int i=0 ; i<n ; i++){
        cin >> arr_double[i];
    }
    double key_double;
    cin >> key_double;
    searchEle(arr_double, n, key_double);
    return 0;
}