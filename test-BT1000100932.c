#include<stdio.h>

int main(){
    int n, m;
    printf("Enter the number of rows : ");
    scanf("%d", &n);
    printf("Enter the number of columns : ");
    scanf("%d", &m);
    int mat[n][m];
    printf("Enter the elements in a matrix : \n");
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<m ; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    
    //the number of non-zero elements
    int ctr = 0;
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<m ; j++){
            if (mat[i][j] > 0)
              ctr++;
        }
    }
    printf("The number of non zero elements : %d\n", ctr);
    
    //sum of elements above the leading diagonal
    int diagsum = 0;
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<m ; j++){
            if (j > i){
               diagsum += mat[i][j];
            }
        }
    }
    printf("The sum of the elements above the leading diagonal is : %d", diagsum);

    
    return 0;
}