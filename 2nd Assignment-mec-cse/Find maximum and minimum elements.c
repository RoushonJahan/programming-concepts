
// Find maximum and minimum elements

#include <stdio.h>
int main()
{
	int i,n,max,min;
	printf("Enter number of intrgers\n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		max=a[i];
		else if(a[i]>min)
		min=a[i];
	}
	printf("%d is maximum and %d is minimum\n",max,min);
	return 0;
}
