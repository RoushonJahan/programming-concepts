


//Print negetive elements

#include <stdio.h>
int main()
{
	int a[100],n,i;
	printf("Enter size of the array: ");
	scanf("%d",&n);
	printf("Enter elements of array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nAll negative elements in array are: ");
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		printf("%d\t",a[i]);
	}
	return 0;
}
