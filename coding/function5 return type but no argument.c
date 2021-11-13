#include<stdio.h>
int sqrt();
main()
{
    int c;
    c=sqrt();

}
int sqrt()
{
    int a,b;
    printf("Enter any number: ");
    scanf("%d",&a);
    b=a*a;
    return (b);
}
