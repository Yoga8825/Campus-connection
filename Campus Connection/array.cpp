#include<stdio.h>
int main()
{
	int a[20],n,i;
	printf("Enter array size:");
	scanf("%d",&n);
	printf("\n Enter an array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Array elements are ");
	for(i=0;i<n;i++)
	{
		printf("\n a[%d]=%d",i,a[i]);
		
	}
}
