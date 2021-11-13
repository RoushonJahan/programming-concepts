#include<stdio.h>
#include<math.h>
int main()

{
    double x,result;


    printf("Enter the value of x : ");
    scanf("%lf",&x);

    result=log(x);

    printf("The log value of %lf is : %lf",x,result);

    return 0;


}
