#include<stdio.h>
void printline();

main()
{
    printline();
    printf("\n Welcome to C programming\n");
    printline();


}

void printline()
{
    int i;
    for(i=1;i<=40;i++)
    {
        printf("*");
    }
}
