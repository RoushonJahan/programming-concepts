#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()

{
    int x1;
    float x,sinx,sinval;


    printf("Enter the value of x (in degree):");
    scanf("%f",&x);
    x1=x;
    x=x*(3.1416/180);
    sinval=sin(x);
    printf("%f is the result",sinval);


    return 0;


}
