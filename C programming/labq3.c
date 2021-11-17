#include<stdio.h>

struct student{
    char name[30];
    int rollno;
    int m1, m2, m3, m4, m5;
};

int totalMarks(int m1, int m2, int m3, int m4, int m5){
    return (m1+m2+m3+m4+m5);
}

double percentage(int total){
    double perc = 0.0;
    perc = (double)(perc/500)*100;
    return perc;
}


int main(){
    int n;
    printf("Enter the number of students : ");
    scanf("%d", &n);
    struct student s[n];
    for (int i=0 ; i<n ; i++){
        printf("Enter the name of %d student : ", i+1);
        fgets(s[i].name, sizeof(s[i].name), stdin);
        printf("Enter the roll number of the %d student : ", i+1);
        scanf("%d", &s[i].rollno);
        printf("Enter the mark 1 of student %d : ", i+1);
        scanf("%d", &s[i].m1);
        printf("Enter the mark 2 of student %d : ", i+1);
        scanf("%d", &s[i].m2);
        printf("Enter the mark 3 of student %d : ", i+1);
        scanf("%d", &s[i].m3);
        printf("Enter the mark 4 of student %d : ", i+1);
        scanf("%d", &s[i].m4);
        printf("Enter the mark 5 of student %d : ", i+1);
        scanf("%d", &s[i].m5);
    }

    for (int i=0 ; i<n ; i++){
        int tot = 0;
        double perc = 0.0;
        tot = totalMarks(s[i].m1, s[i].m2, s[i].m3, s[i].m4, s[i].m5);
        perc = percentage(tot);
        printf("The total marks of student %d is : %d", i+1, tot);
        printf("The percentage of student %d is : %lf", i+1, perc);
    }
    return 0;
}