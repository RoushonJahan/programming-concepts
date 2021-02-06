//Delete an element from a given array
#include <stdio.h>
int main()
{
	int a[5],i,pos;
	printf("Enter 5 elements :\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the position where you want to delete the element: \n");
	scanf("%d",&pos);
	if(pos>5)
	printf("Can not be deleted!");
	else
	{
		for(i=pos-1;i<5-1;i++)
		{
			a[i]=a[i+1];
		}
		printf("Resultant array is : \n");
		{
			for(i=0;i<5-1;i++)
			{
				printf("%d\n",a[i]);
			}
		}
	}
	return 0;
}
