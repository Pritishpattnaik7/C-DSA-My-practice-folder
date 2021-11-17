//q9
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements in the array : ");
    for (int i=0 ; i<n ; i++){
        scanf("%d", &arr[i]);
    }

    int revIdx = 0;
    int arrIdx = n-1;

    while (revIdx < arrIdx){
        int temp = arr[revIdx];
        arr[revIdx] = arr[arrIdx];
        arr[arrIdx] = temp;
        revIdx++;
        arrIdx--;
    }

    printf("The reversed array is : ");
    for (int i=0 ; i<n ; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}