#include <stdio.h>
#include <string.h>

struct student
{
    char name[64];
    int roll;
    float cg;
};

int main()
{

    struct student s1;

    s1.cg = 3.58;
    s1.roll = 202414020;

    strcpy(s1.name, "Saad");

    printf("CG=%.2f\n", s1.cg);
    printf("roll=%d\n", s1.roll);
    printf("name:%s\n", s1.name);
printf("\n");
//  initialising ... structure 

struct student s2={"Farat",202414027,4.00};


printf("Name %s\n",s2.name);
printf("Roll: %d\n",s2.roll);
printf("CG : %.2f\n",s2.cg);






}