
//Delete duplicate element from an array


#include<stdio.h>
int main()
{
    int a[20],b[20],n,i,j=0;
    printf("Enter number of element in array: \n");
    scanf("%d",&n);
    printf("Give your array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])
        {
            b[j]=a[i];
            j++;
            b[j]=a[n-1];
        }
    }
    for(i=0;i<j+1;i++)
    {
    printf("%d ",b[i]);
    }
}



