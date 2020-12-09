
//Find largest number using array


#include <stdio.h>
int main()
{
	int i,a[100],largest,n;
	printf("How many number: ");
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d\n",&a[i]);
	}
	largest=a[0];
	for(i=1;i<n;i++)
	{
		if(largest<a[i])
		largest=a[i];
	}
	printf("Largest number is: %d\n",largest);
	return 0;
}
