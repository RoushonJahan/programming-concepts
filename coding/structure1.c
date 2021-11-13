#include<stdio.h>
#include<string.h>

struct Person
{
    int n,id;
    char *name,*dept,*occupation;


};

struct Person person[50];

int main()
{
    int n;

    person[0].id=1001;
    person[0].name="Ritu";
    person[0].dept="CSE";
    person[0].occupation="Programmer";


    person[1].id=1002;
    person[1].name="Afrin";
    person[1].dept="CSE";
    person[1].occupation="Software Devolopar";

    person[2].id=1003;
    person[2].name="Mahjabin";
    person[2].dept="pharmacy";
    person[2].occupation="Pharmacist";

    person[3].id=1004;
    person[3].name="Fairoj";
    person[3].dept="EEE";
    person[3].occupation="Electric Engineer";


    person[4].id=1005;
    person[4].name="Humaira";
    person[4].dept="Civil";
    person[4].occupation="Civil Engineer";

    person[5].id=1006;
    person[5].name="Iffat";
    person[5].dept="IIT";
    person[5].occupation="software Engineer";




    person[6].id=1007;
    person[6].name="Imrana";
    person[6].dept="Dental";
    person[6].occupation="Dentist";


    person[7].id=1008;
    person[7].name="Intesar";
    person[7].dept="Economics";
    person[7].occupation="Banker";


    person[8].id=1009;
    person[8].name="Jarin Fariha";
    person[8].dept="CSE";
    person[8].occupation="Programmer";

    person[9].id=10010;
    person[9].name="Jarin khan";
    person[9].dept="Bangla";
    person[9].occupation="teacher";

    person[10].id=10011;
    person[10].name="Lutfa";
    person[10].dept="Nursing";
    person[10].occupation="Nure";

    person[11].id=10012;
    person[11].name="Maria";
    person[11].dept="youtube";
    person[11].occupation="youtuber";



    scanf("%d",&n);


    printf("Id:%d\n ",person[n].id);
    printf("Name:%s\n",person[n].name);
    printf("Department:%s\n ",person[n].dept);
    printf("Occupation:%s\n ",person[n].occupation);





    return 0;
    }



