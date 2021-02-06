
// count even and odd element
#include <stdio.h>
int main()
{
	int a[20],e=0,o=0,n,i;
	printf(" How many numbers: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]/2==0)
		{
			e++;
		}
		else if(a[i]/2!=0)
		{
			o++;
		}
		}
		printf("We find %d even numbers\n",e);
		printf("We find %d odd numbers",o);

	return 0;
}
