
//Find smallest number using array
#include <stdio.h>
int main()
{
	int i,a[100],smallest,n;
	printf("How many number: ");
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d\n",&a[i]);
	}
	smallest=a[0];
	for(i=1;i<n;i++)
	{
		if(smallest>a[i])
		smallest=a[i];
	}
	printf("Smallest number is: %d\n",smallest);
	return 0;
}
