#include <stdio.h>
#define PI 3.14159 // constant
#define name "SAAD"  // string
#define print_from_define printf("Hello world\n")  // print command

#include "info.h"  // my header file

int main(){
float a=PI;

printf("PI: %f\n",a);
printf("%s\n",name);


print_from_define;  

// from the header file 

printf("age: %d\n",age);
printf("mood:%s\n",mood);
printf("date:%s\n",date);
printf("weather:%s\nstatus:",weather);
puts(status);



}