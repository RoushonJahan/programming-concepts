
//Reverse copy
#include <stdio.h>
int main()
{
	int a[10]={0,1,2,3,4,5,6,7,8,9},i,copied[10],c;
	c=9;
	for(i=0;i<10;i++)
	{
		copied[c]=a[i];
		c--;
	}
	printf("Entered numbers:\n");
	for(i=0;i<10;i++)
	{
		printf(" %d\n",a[i]);
	}
	printf("Reverse copy:\n");
	for(i=0;i<10;i++)
	{
		printf(" %d\n",copied[i]);
	}
	return 0;
}
