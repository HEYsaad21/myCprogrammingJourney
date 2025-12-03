#include<stdio.h>
#include<string.h>

struct student {
    char name[100];
    int roll;
    float cgpa;
};  //" ; " is needed

int main(){

//declare
 struct student s1; // data 1 => variable s1 belonging from stuct student 

s1.cgpa = 3.69; // s1.cgpa => dot operator accesses properties of s1 
s1.roll=69;
         // s1.name="xyz" ; error => need strcpy function to copy str to s1.name
strcpy(s1.name,"xyz"); //now "xyz" copied to s1.name;

printf("\nstudent info:\n");
printf("name: %s\n",s1.name);
printf("roll: %d\n",s1.roll);
printf("cgpa: %.2f\n",s1.cgpa);



    return 0;
}