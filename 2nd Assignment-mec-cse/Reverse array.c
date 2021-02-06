

//Reverse array

#include <stdio.h>
int main()
{
	int n,a[1];
	printf("Enter any integer number:");
	scanf("%d\n",&n);
	while(n!=0)
	{
		a[0]=n%10;
		n=n/10;
		printf("%d",a[0]);
	}
	}
