
//Divide even and odd numbers

#include <stdio.h>
int main()
{
	int a[100],even[100],odd[100],n,i,e=0,o=0;
	printf("Total number is=");
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d\n",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
		even[e]=a[i];
			e++;
		}
		else
		{
			odd[o]=a[i];
			o++;
		}
	}
	printf("\n\nOriginal numbers= ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}

	printf("\n");
	printf("\n\nEven numbers= ");
	for(i=0;i<e;i++)
	{
		printf("%d\t",even[i]);
	}
	printf("\n");
	printf("\n Odd numbers= ");
	for(i=0;i<o;i++)
	{
		printf("%d\t",odd[i]);
	}

	}
