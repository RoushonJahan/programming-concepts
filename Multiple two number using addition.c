//Program to multiply two number using addition
#include <stdio.h>
int main()
{
	int sum=0,i,n,m;
	printf("Enter the value of n= ");
	scanf("%d",&n);
	printf("Enter the value of m= ");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		sum=sum+m;
	
	}
	printf("%d\n",sum);
	return 0;
}
