//q5
#include<stdio.h>
void commonEle(int a[], int b[], int c[], int n, int m, int p){
    int i=0 , j=0 , k=0;
    while (i<n && j<m && k<p){
        if (a[i] < b[j] && a[i] < c[k])
          i++;
        else if (b[j] < a[i] && b[j] < c[k])
          j++;
        else if (c[k] < a[i] && c[k] < b[j])
          k++;
        else if (a[i] == b[j] && a[i] == c[k]){
            printf("%d ", a[i]);
            i++;
            j++;
            k++;
        }      
    }
}

int main(){
    int n,m,p;
    printf("Enter the size of the 1st array : ");
    scanf("%d", &n);
    printf("Enter the size of the 2nd array : ");
    scanf("%d", &m);
    printf("Enter the size of the 3rd array : ");
    scanf("%d", &p);

    int a[n], b[m], c[p];
    printf("Enter the elements in the 1st array : ");
    for (int i=0 ; i<n ; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the elements in the 2nd array : ");
    for (int i=0 ; i<m ; i++){
        scanf("%d", &b[i]);
    }
    printf("Enter the elements in the 3rd array : ");
    for (int i=0 ; i<p ; i++){
        scanf("%d", &c[i]);
    }
    
    printf("The common elements in the 3 arrays are : ");
    commonEle(a,b,c,n,m,p);
    return 0;
}