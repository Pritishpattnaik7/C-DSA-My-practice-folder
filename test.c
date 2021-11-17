#include <stdio.h>
struct people
{
    char name[30];
    int age;
    char sex[20];
    int dob;
    };
    void main()
    {
        struct people st[10];
        int i,x=1;
        for(i=0;i<2;i++)
        {
        printf("Enter the name : ");
        scanf("%s",&st[i].name);
        printf("enter the age : ");
        scanf("%d",&st[i].age);
        printf("Enter the sex : ");
            scanf("%s",&st[i].sex);
            printf("Enter the date of birth : ");
            scanf("%d",&st[i].dob);
        }
        printf("slno\tname\tage\t DOB");
        for(i=0;i<2;i++)
        {
            if(strcmp(st[i].sex,"female")==0)
            printf("%d\t%s\t%d\t%d\n",x,st[i].name,st[i].age,st[i].dob);
        }
    }