//swap two number without using third variable
#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter the value of A= ");
	scanf("%d",&a);
	printf("Enter the value of B= ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("After swaping  the value of A = %d and B= %d",a,b);
	return 0;
}
