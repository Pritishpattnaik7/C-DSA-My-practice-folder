#include<stdio.h>
#define srow 30

int main(){
    int n, m;
    printf("Enter the number of rows : ");
    scanf("%d", &n);
    printf("Enter the number of columns : ");
    scanf("%d", &m);

    int mat[n][m], sparse[srow][3];
    int i,j, nzero=0, sr, s=1;
    printf("Enter the elements in the matrix : \n");
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<m ; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i=0 ; i<n ; i++){
        for (int i=0 ; i<m ;i++){
            if (mat[i][j] != 0){
                nzero++;
            }
        }
    }

    sr = nzero+1;
    sparse[0][0] = n;
    sparse[0][1] = m;
    sparse[0][2] = nzero;
    
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<m ; j++){
            if (mat[i][j] != 0){
                sparse[s][0] = i+1;
                sparse[s][1] = j+1;
                sparse[s][2] = mat[i][j];
                s++;
            }
        }
    }

    int trans[sr][3];
    for (int i=0 ; i<sr ; i++){
        for (int j=0 ; j<3 ; j++){
            trans[j][i] = sparse[i][j];
        }
    }

    int res[sr][3];
    for (int i=0 ; i<sr ; i++){
        for (int j=0 ; j<3 ; j++){
            res[i][j] = sparse[i][j] + trans[i][j];
        }
    }

    printf("The addition of th sparse and it's transpose is : \n");
    for (int i=0 ; i<sr ; i++){
        for (int j=0 ; j<3 ; j++){
            printf("%d " , res[i][j]);
        }
        printf("\n");
    }
    return 0;
}