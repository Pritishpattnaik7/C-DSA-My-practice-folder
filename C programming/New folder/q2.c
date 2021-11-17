#include<stdio.h>

void findEle(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
            if (arr[j] > arr[i])
                count++;
 
        if (count >= 2)
          printf("%d ", arr[i]);
    }
}

int main(){
    int n;
    printf("enter the size of the array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements in the array : ");
    for (int i=0 ; i<n ; i++){
        scanf("%d", &arr[i]);
    }

    findEle(arr, n);
    return 0;
}