
//copy some numbers

#include <stdio.h>
int main()
{
	int i,n,a[100],copied[100];
	printf("How many numbers: ");
	scanf("%d\n",&n);
	printf("Original numbers: ");
	for(i=0;i<n;i++)
	{
		scanf("%d\n",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		copied[i]=a[i];
	}
	printf("copied number= ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",copied[i]);
	}
	return 0;
}
