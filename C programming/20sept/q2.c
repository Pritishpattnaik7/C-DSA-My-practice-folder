//q2 Addition of 2 polynomial using array
#include<stdio.h>

struct poly{
    float coef;
    int expo;
} a[10], b[10], sum[10];

int main(){
    int deg1, deg2;
    int m=0, n=0, p=0;
    printf("Enter the highest degree of polynomial 1 : ");
    scanf("%d", deg1);
    printf("Enter the highest degree of polynomial 2 : ");
    scanf("%d", deg2);

    //1st poly
    printf("Enter the 1st polynomial : \n");
    for (int i=0 ; i<=deg1 ; i++){
        printf("Enter the coefficient of x^%d : ", i);
        scanf("%f", &a[i].coef);
        a[m++].expo = i;
    }

    //2nd poly
    printf("Enter the 2nd polynomial : \n");
    for (int i=0 ; i<=deg2 ; i++){
        printf("Enter the coefficient of x^%d : ", i);
        scanf("%f", &b[i].coef);
        b[n++].expo = i;
    }

    //addition
    if (deg1 > deg2){
        for (int i=0 ; i<=deg2 ; i++){
            sum[p].coef = a[i].coef + b[i].coef;
            sum[i].expo = a[i].expo;
            p++;
        }
        for(int i=deg2+1 ; i<=deg1 ; i++){
            sum[p].coef = a[i].coef;
            sum[p].expo = a[i].expo;
            p++;
        }
    }
    else {
        for(int i=0 ; i<=deg1 ; i++){
            sum[p].coef = a[i].coef + b[i].coef;
            sum[p].expo = a[i].expo;
            p++;
        }
        for(int i=deg1+1 ; i<=deg2 ; i++){
            sum[p].coef = b[i].coef;
            sum[p].expo = b[i].expo;
            p++;
        }
    }

    //print sum
    printf("Sum = ");
    for (int i=0 ; i<p ; i++){
        printf("+ %.1fx^%d",sum[i].coef , sum[i].expo);
    }
    return 0;
}