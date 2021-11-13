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
    person[10].occupation="Nurse";

    person[11].id=10012;
    person[11].name="Maria";
    person[11].dept="youtube";
    person[11].occupation="youtuber";

        person[12].id=10013;
    person[12].name="nafisa";
    person[12].dept="CSE";
    person[12].occupation="Programmer";

        person[13].id=10014;
    person[13].name="kaniz";
    person[13].dept="Nurse";
    person[13].occupation="Nursing";

        person[14].id=10015;
    person[14].name="Mahrun";
    person[14].dept="English";
    person[14].occupation="Teacher";

        person[15].id=1006;
    person[15].name="Jemim";
    person[15].dept="feshon design";
    person[15].occupation="fashon Designer";

        person[16].id=10017;
    person[16].name="Nusrat";
    person[16].dept="English";
    person[16].occupation="Teacher";

        person[17].id=10018;
    person[17].name="Rayra";
    person[17].dept="Math";
    person[17].occupation="Mathematician";

        person[18].id=10019;
    person[18].name="Shila";
    person[18].dept="Biology";
    person[18].occupation="Teacher";


        person[19].id=10020;
    person[19].name="Sadia Zaman";
    person[19].dept="MBBS";
    person[19].occupation="Doctor";

        person[20].id=10021;
    person[20].name="liza";
    person[20].dept="MBBS";
    person[20].occupation="Doctor";


        person[21].id=1001;
    person[21].name="Raziya";
    person[21].dept="CSE";
    person[21].occupation="Web Devoloper";

        person[22].id=10023;
    person[22].name="Afra";
    person[22].dept="Biochemistry";
    person[22].occupation="Biochemist";

        person[23].id=10024;
    person[23].name="Shariya";
    person[23].dept="Physics";
    person[23].occupation="Scientist";

        person[24].id=10025;
    person[24].name="Rakib";
    person[24].dept="IIT";
    person[24].occupation="cagol";

        person[25].id=10026;
    person[25].name="trofder";
    person[25].dept="IIT";
    person[25].occupation="Goru";

        person[26].id=10027;
    person[26].name="Tamim";
    person[26].dept="MBBS";
    person[26].occupation="Doctor";

        person[27].id=10028;
    person[27].name="Tabib";
    person[27].dept="EEE";
    person[27].occupation="scientist";

        person[28].id=10029;
    person[28].name="Ishi";
    person[28].dept="MBBS";
    person[28].occupation="Housewife";

        person[29].id=10030;
    person[29].name="gadha";
    person[29].dept="goru";
    person[29].occupation="cagol";


    scanf("%d",&n);


    printf("Id:%d\n ",person[n].id);
    printf("Name:%s\n",person[n].name);
    printf("Department:%s\n ",person[n].dept);
    printf("Occupation:%s\n ",person[n].occupation);





    return 0;
    }



