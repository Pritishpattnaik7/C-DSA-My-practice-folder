#include <stdio.h>

void mergeArray(int a[], int n, int b[], int m, int c[]){
    int i =0;
    int j = 0;
    int k = 0;
    while (i<n && j<m){
        if (a[i] < b[j]){
            c[k] = a[i];
            i++;
        }
        else {
            c[k] = b[j];
            j++;
        }
        k++;
    }
    if (i >= n){
        while (j < m){
            c[k] = b[j];
            j++;
            k++;
        }
    }
    if (j >= m){
        while (i < n){
            c[k] = a[i];
            i++;
            k++;
        }
    }
}

int main()
{
    int n,m;
    printf("Enter the size of 1st array : ");
    scanf("%d", &n);
    printf("Enter the size of 2nd array : ");
    scanf("%d", &m);
    int a[n];
    int b[m];
    int c[n+m];
    printf("Enter the elements of the 1st array\n");
    for (int i=0 ; i<n ; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the elements of the 2nd array\n");
    for (int i=0 ; i<m ; i++){
        scanf("%d", &b[i]);
    }

    mergeArray(a, n, b, m, c);
    
    printf("After merging the final sorted array is : \n");
    for (int i=0 ; i<n+m ; i++){
        printf("%d ", c[i]);
    }

    return 0;
}