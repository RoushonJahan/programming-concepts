

//Second largest number

#include <stdio.h>
int main()
{
	int ara[10],i,larg1,larg2,temp;
	printf("Enter elements: ");
	for(i=0;i<5;i++)
	{
		scanf("%d ",&ara[i]);
		}
	larg1=ara[0];
	larg2=ara[2];
	if(larg1<larg2)
	{
		temp=larg1;
		larg1=larg2;
		larg2=temp;
	}
	for(i=2;i<5;i++)
	{
		if(ara[i]>=larg1)
		{
			larg2=larg1;
			larg1=ara[i];
		}
		else if(ara[i]>=larg2)
		{
			larg2=ara[i];
		}
}
printf("%d is the second largest number",larg2);
return 0;
}
