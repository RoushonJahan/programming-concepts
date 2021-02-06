
//left rotation
#include <stdio.h>
int main()
{
int a[100],n,i,j,k,temp;
printf("enter size of the array:");
scanf("%d",&n);
printf("enter elements in array :");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("how many times left rotate");
scanf("%d",k);
for(i=0;i<k;i++)
{
temp=a[0];
for(j=0;j<n-1;j++)
{
a[j]=a[j+1];
}
a[n-1]=temp;
}
printf("\narray elements after left rotate:");
for(i=0;i<n;i++)
{
printf("%d",&a[i]);
}
}

