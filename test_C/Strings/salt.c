#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
char pass[64];
char NewPass[128];
char salt[]="123";
printf("Enter Password:");
gets(pass);

strcpy(NewPass,pass);
strcat(NewPass,salt);

printf("Salted Password:%s\n",NewPass);




}