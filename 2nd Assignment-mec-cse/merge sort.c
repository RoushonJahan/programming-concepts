
//merge sort
#include <stdio.h>
#include <conio.h>
int main()
{
	int a[]={2,8,6,9,1};
	int b[]={7,3,5,4,10};
	int c[10];
	//sort both array
	for(int i=0;i<4;i++)
	{
		int t,j;
		for(j=i;j<5;j++){
		if(a[i]>a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
		if(b[i]>b[j])
		{
			t=b[i];
			b[i]=b[j];
			b[j]=t;
		}
		}
		}

	int i,j,k;
	 i=j=k=0;
	for(;k<10;)
	{
		if(a[i]<=b[j])
		c[k++]=a[i++];
		else
		c[k++]=b[j++];
		if(i==5||j==5)
		break;
	}
	for(;i<5;)
	c[k++]=a[i++];
	for(;j<5;)
	c[k++]=b[j++];
	printf("Marge array after sorting is =\n");
	for(int i=0;i<10;i++)
	{
		printf("%d ",c[i]);
	}
	//getch();
	}
