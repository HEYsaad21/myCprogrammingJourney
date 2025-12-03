#include<stdio.h>
int main(){

char day; //Sat-s,Sun-S,mon-m,...tue-t,thu-T,fri-f
printf("ENTER CHARACTER(s,S,m...t,T,f) : ");
scanf("%s",&day);

switch(day){
case 's':
        printf("SATURDAY");
        break;
    case 'S':
        printf("SUNURDAY");
        break;
    case 'm':
        printf("MONDAY");
        break;    
    case 't':
        printf("TUESDAY");
        break;
    case 'w':
        printf("WEDNESDAY");
        break;
    case 'T':
        printf("THURSDAY");
        break;

    case 'f':
        printf("FRIDAY");
        break;
default : printf("NOT A VALID INPUT"); }



return 0;


}