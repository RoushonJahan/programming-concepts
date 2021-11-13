#include<stdio.h>
void even_or_odd(int x)
{
    if(x%2==0)
    {
        printf("This number is even\n");

    }
    else
    {
        printf("This number is odd\n");

    }
}
int main()
{
    even_or_odd(10);
    return 0;
}
