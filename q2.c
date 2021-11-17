#include<stdio.h>

int main(){
    int ctr = 0;
    int n= 10;
    for (int j=0 ; j<n ; j++){
        for (int i=j ; i>0 ; i--){
            ctr++;
        }
    }
    printf("%d", ctr);
    return 0;
}