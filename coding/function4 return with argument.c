#include<stdio.h>
int sum(int x,int y);
main()
{
    int a,b,c;
    printf("Enter any two number= ");
    scanf("%d%d",&a,&b);
    c=sum(a,b);
    printf("Sum of the two number is :%d",c);

}
int sum(int x ,int y)
{
    int z;
    z=x+y;
    return (z);
}
