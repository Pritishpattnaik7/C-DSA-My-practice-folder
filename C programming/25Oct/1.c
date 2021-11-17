#include<stdio.h>

void removeOddNum(int arr[], int n){
    for (int i=0 ; i<n ; i++){
        if (arr[i] % 2 == 0){
            printf("%d " , arr[i]);
        }
    }
}

int main(){
   int n;
   printf("Enter the size of the array : ");
   scanf("%d", &n);
   int arr[n];
   for (int i=0 ; i<n ; i++){
       scanf("%d", &arr[i]);
   }

   removeOddNum(arr, n);
   return 0;
}