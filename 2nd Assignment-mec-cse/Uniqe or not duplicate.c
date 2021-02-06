
//Uniqe or not duplicate

#include <stdio.h>
int main()
{

    int a[50]= {0};
    int b[50]= {0};
    int t=0,n,k,m,j,i;
    printf("Enter total elements in the array: ");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(m=0; m<n; m++)
    {
        printf("Element %d:",m+1);
        scanf("%d",&a[m]);
        b[m]=a[m];
    }

    for(i=0; i<n-1; i++)
    {

        if(a[i]==-100000){
            continue;
        }
        else{
             for(j=i+1; j<n; j++)
        {

            if(a[i]==a[j]){


                a[i]=-100000;
                b[j]=-100000;
                a[j]=-100000;

            }

            }


        }

    }
        printf("\nThe unique elements in array are :\t");

     for(i=0; i<n; i++)
    {
         if(a[i]!=-100000){
            printf("%d\t",a[i]);
        }

    }


    return 0;
}
