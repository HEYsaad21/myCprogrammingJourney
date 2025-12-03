#include<stdio.h>
int main(){

char fullName[100];
printf("write your full name: ");
    
    fgets(fullName,100,stdin) ;          // gets(fullName);
    puts(fullName)   ;                   // printf("your full name is: %s",fullName);



    return 0;
}