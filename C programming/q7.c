#include<stdio.h>

int main(){
    int n;
    printf("enter the size of the array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements in the array : ");
    for (int i=0 ; i<n ; i++){
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Enter the element to be searched : ");
    scanf("%d", &key);

    int count = 0;
    for(int i = 0; i<n; i++)  
    {  
        if(arr[i] == key)  
        {  
          printf("%d has appeared at position %d in the array.\n", key, i + 1);  
          count++;  
        }  
    }  
  
  printf("\nFinal Result: %d has appeared %d times in the array.\n", key, count);  
  
    return 0;
}