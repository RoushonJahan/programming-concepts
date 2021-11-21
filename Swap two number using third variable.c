//swap two number with using third variable
#include <stdio.h>
int main()
{
	int a,b,temp;
	printf("Enter the value of A= ");
	scanf("%d",&a);
	printf("Enter the value of B= ");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	
	printf("After swaping  the value of A = %d and B= %d",a,b);
	return 0;
}
