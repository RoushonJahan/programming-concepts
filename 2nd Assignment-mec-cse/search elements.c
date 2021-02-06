
//search elements

#include <stdio.h>
int main()
{
	int num[]={10,20,25,98,100};
	int value,pos=-1,i;
	printf("Enter the value you want to scarch : ");
	scanf("%d",&value);
	for(i=0;i<7;i++)
	{
		if(value==num[i]);
		{
			pos=i+1;
			break;
		}
	}
	if(pos==-1)
	{
		printf("Item is not found");
	}
	else{
	printf("The value is found at %d position",pos);
	}
	return 0;
}
