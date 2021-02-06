
//count duplicate element


#include <stdio.h>
int main()
{
	int a[10],b=0,c,i,j;
	printf("Enter the first 10 elements\n");
	for(i=0;i<10;i++)
	{
		printf("\n elements %d= ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		c=0;
		for(j=0;j<10;j++)
		{
			if(a[i]==a[j])
			{
				c++;
			}
		}
		if(c>=2&& a[i]!=b)
		{
			b=a[i];
			printf("\n%d= %d times\n",a[i],c);
		}
	}
	return 0;
}
