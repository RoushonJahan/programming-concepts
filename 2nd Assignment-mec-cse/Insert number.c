
//Insert number

#include <stdio.h>
int main()
{
	int a[100]={10,20,30,40,50,60,70,80,90},size=9,pos,value,i;
	printf("Which possition? ");
	scanf("%d",&pos);
	printf("Enter the value: ");
	scanf("%d",&value);
	for(i=size;i>=pos;i--)
	{
		a[i]=a[i-1];
	}
	a[pos-1]=value;
	for (i=0;i<size+1;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
