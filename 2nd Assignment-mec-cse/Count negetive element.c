//Count negetive element

#include <stdio.h>
int main()
{
	int a[20],neg=0,p=0,n,i;
	printf(" How many numbers: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			neg++;
		}
		else if(a[i]>=0)
		{
			p++;
		}
		}
		printf("We find %d negetive numbers",neg);
	return 0;
}
