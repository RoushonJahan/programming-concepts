//Find avarege
#include <stdio.h>
int main()
{
	int n,a[100],i,sum=0,avb=0;
	printf("How many numbers: ");
	scanf("%d",&n);
	printf("Enter the numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d\n",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}

	printf("Avarege= %f\n",(float)sum/n);
	}
