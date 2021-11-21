//Print all odd number till N
#include <stdio.h>
int main()
{
	int i,n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("Print all odd number till %d \n",n);
	for(i=0;i<=n;i++)
	{
		if(i%2==1)
		printf("%d\n",i);
	}
	return 0;
}
