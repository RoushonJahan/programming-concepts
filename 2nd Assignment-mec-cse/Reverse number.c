
//Reverse number

#include <stdio.h>
int main()
{
	int array[75]={0},n=423,r=0;
	printf("Entered number is: 423\n");
	printf("Reverse number is: ");
	while(n!=0)
	{
		array[r]=n%10;
		n=n/10;

		printf("%d",array[r]);
	}
	return 0;
}
