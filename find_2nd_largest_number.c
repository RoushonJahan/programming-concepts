
//Find second largest number using array


#include<stdio.h>
#define N 5
int main()
{
   int array[N],largest,largest2,temp,i;

   printf("Enter %d number= ",N);
   for(i=0;i<N;i++)
   {
	scanf("%d",&array[i]);
	}
	largest=array[0];
	largest2=array[1];

	if(largest<largest2)
	{
	temp=largest;
	largest=largest2;
	largest2=temp;
	}

	for(i=2;i<N;i++)
	{
	if(array[i]>=largest)
  {
  largest2=largest;
  largest=array[i];
  }

 else if(array[i]>=largest2)
  {
   largest2=array[i];
  }
	}
	printf("The largest number is %d \n",largest);
	printf("The second largest number is %d \n",largest2);
	return 0;
}
