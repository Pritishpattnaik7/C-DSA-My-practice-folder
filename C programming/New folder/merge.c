#include<stdio.h>
int main()
{
	int n, m, s=0, i, t, j;
	printf("Enter size of 2 arrays: ");
	scanf("%d%d", &n, &m);
	int a[n], arr[m];
	printf("Enter the elements of array 1: ");
	for(i=0;i<n;i++)
	scanf("%d", &a[i]);
	printf("Enter the elements of array 2: ");
	for(i=0;i<(m-n);i++)
	scanf("%d", &arr[i]);
	for(i=(m-n);i<m;i++)
	{
		arr[i]=a[s];
		s++;
	}
	printf("Final array 2: ");
	for(i=0;i<m;i++)
	printf("%d ", arr[i]);
	printf("\n");
	printf("array 2 after sorting: ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
	}
	for(i=0;i<m;i++)
	printf("%d ", arr[i]);
}