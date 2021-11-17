/** Q4.
arr1 arr2
sum1-a+b = sum2+a-b
2a-2b = sum1-sum2
a-b = (sum1-sum2)/2
**/

#include<stdio.h>

int arrSum(int arr[], int s){
    int sum = 0;
    for (int i=0 ; i<s ; i++){
        sum += arr[i];
    }
    return sum;
}

//a-b = (sum1-sum2)/2
int f1(int arr1[], int n, int arr2[], int m){
    int sum1 = arrSum(arr1, n);
    int sum2 = arrSum(arr2, m);
    if ((sum1 - sum2) % 2 != 0){
        return 0;
    }
    return ((sum1 - sum2)/2);
}

void findSwapNum(int arr1[], int n, int arr2[], int m){
    int t = f1(arr1, n, arr2, m);
    if (t == 0){
        return;
    }
    int a , b;
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<m ; j++){
            if (arr1[i] - arr2[j] == t){
                a = arr1[i];
                b = arr2[j];
            }
        }
    }
    printf("%d %d", a,b);
}

int main(){
    int n, m;
    printf("Enter the size of the 1st array : ");
    scanf("%d", &n);
    int arr1[n];
    printf ("Enter the elements in array 1 : ");
    for (int i=0 ; i<n ; i++){
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the 2nd array : ");
    scanf("%d", &m);
    int arr2[m];
    printf ("Enter the elements in array 2 : ");
    for (int i=0 ; i<m ; i++){
        scanf("%d", &arr2[i]);
    }


    printf("Swaped numbers are : ");
    findSwapNum(arr1, n, arr2, m);
    printf("\n");
    return 0;
}