
//concatenation
#include <stdio.h>
int main()
{
	int a[10]={0},even[5]={2,4,6,8,10},odd[5]={1,3,5,7,9},x=0,e,o,i;
	e=o=0;
	for(i=0;i<e;i++)
	{
		a[x]=even[i];
		x++;
	}
	for(i=0;i<o;i++)
	{
		a[x]=odd[i];
		x++;
	}
	printf("\n Even numbers are: ");
	for(i=0;i<5;i++)
	{
		printf("%d\t",even[i]);
	}
	printf("\n Odd numbers are: ");
	for(i=0;i<5;i++)
	{
		printf("%d\t",odd[i]);
	}
	printf("\nConcatenation of even numbers and odd numbers is: ");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	}
