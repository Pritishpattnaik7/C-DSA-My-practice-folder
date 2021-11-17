#include<stdio.h>

void addArray(int a[], int b[], int n){
    int sum[n];
    for (int i=0 ; i<n ; i++){
        sum[i] = a[i] + b[i];
    }
    for (int i=0 ; i<n ; i++){
        printf("%d ", sum[i]);
    }
}

void subArray(int a[], int b[], int n){
    int sub[n];
    for (int i=0 ; i<n ; i++){
        sub[i] = a[i] - b[i];
    }
    for (int i=0 ; i<n ; i++){
        printf("%d ", sub[i]);
    }
}

void productArray(int a[], int b[], int n){
    int prod[n];
    for (int i=0 ; i<n ; i++){
        prod[i] = a[i] * b[i];
    }
    for (int i=0 ; i<n ; i++){
        printf("%d ", prod[i]);
    }
}

int main(){
    int n;
    printf("enter the size of the arrays : ");
    scanf("%d", &n);

    int a[n], b[n];
    printf("Enter the elements in the 1st array : ");
    for (int i=0 ; i<n ; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the elements in the 2nd array : ");
    for (int i=0 ; i<n ; i++){
        scanf("%d", &b[i]);
    }

    printf("The sum of 2 arrays is : ");
    addArray(a,b,n);
    printf("\n");
    printf("The subtraction of 2 arrays is : ");
    subArray(a,b,n);
    printf("\n");
    printf("The product of 2 arrays is : ");
    productArray(a,b,n);
    return 0;
}