//q1
#include<stdio.h>

void Union(int a[], int b[], int n, int m){
    int i=0 , j=0;
    while (i<n && j<m){
        if (a[i] < b[j]){
            printf("%d ", a[i]);
            i++;
        }
        else if (b[j] < a[i]){
            printf("%d ", b[j]);
            j++;
        }
        else {
            printf("%d ", b[j]);
            i++;
            j++;
        }
    }
    while(i<n){
        printf("%d ", a[i]);
        i++;
    }
    while (j<m){
        printf("%d ", b[j]);
        j++;
    }
}

void intersection(int a[], int b[], int n, int m){
    int i=0 , j=0;
    while (i<n && j<m){
        if (a[i] < b[j])
          i++;
        else if (b[j] < a[i])
          j++;
        else {
            printf("%d ", a[i]);
            i++;
            j++;
        }    
    }
}

int main(){
    int n, m;
    printf("Enter the size of the first array : ");
    scanf("%d", &n);
    printf("Enter the size of the second array : ");
    scanf("%d", &m);

    int a[n], b[m];
    printf("Enter the elements in the first array : ");
    for (int i=0 ; i<n ; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the elements in the second array : ");
    for (int i=0 ; i<m ; i++){
        scanf("%d", &b[i]);
    }

    printf("the intersertion of 2 arrays is : ");
    intersection(a,b,n,m);
    return 0;
}