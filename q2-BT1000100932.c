 #include <stdio.h>

struct rainfall{
  float thisyr;
  float lastyr;
};

int main(){
float totalthis, totallast, averagethis, averagelast;
    struct rainfall detail[12];
    
for(int i=0;i<12;i++)
{
    printf("Enter The present past rainfall for %d month:",(i+1));
    scanf("%f %f",&detail[i].thisyr,&detail[i].lastyr);
}
printf("\n\t\t\t\t\tTABLE OF MONTHLY RAINFALL\t\t\t\t\t:\n");
printf("JAN\tFEB\tMAR\tAPR\tMAY\tJUNE\tJULY\tAUG\tSEPT\tOCT\t\tNOV\tDEC\n");
for(int i=0;i<12;i++)
{
printf("%1.f\t",detail[i].thisyr);
totalthis=totalthis+detail[i].thisyr;
}
printf("\n");
for(int i=0;i<12;i++)
{
printf("%1.f\t",detail[i].lastyr); 
totallast=totallast+detail[i].lastyr;
}
 averagethis=totalthis/12;
 averagelast=totallast/12;

printf("TOTAL RAINFALL THIS YEAR:%2.f:\n",totalthis);
printf("TOTAL RAINFALL LAST YEAR%2.f:\n",totallast);
printf("Average monthly rainfall for this year%2.f:\n",averagethis);
printf("Average monthly rainfall for last year%2.f:\n",averagelast);

    return 0;
}
