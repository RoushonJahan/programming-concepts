
//Print array reverse

#include <stdio.h>
int main()
{
	int i,a[100],n;
	scanf("%d\n",&n);
	printf("Enter the numbers: ");
	for(i=0;i<n;i++)
	{
		scanf("%d\n",&a[i]);
	}
	printf("Reverse numbers= ");
	for(i=n-1;i>=0;i--)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
