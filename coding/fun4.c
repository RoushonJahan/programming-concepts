#include<stdio.h>
void print_divisors(int x)
{
    int i;
    for(i=1;i<=x;i++)
    {
        if(x%2==0)
        {
            print("%d\n",x);

        }
    }
}
int main()
{
    print_divisors(20);
    return 0;
}
