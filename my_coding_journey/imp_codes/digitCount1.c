#include<stdio.h>

int main(){
    long int Num;
    printf("Enter a number: ");
    scanf("%ld",&Num);

   int digits=0;

   while(Num!=0){
    Num=Num/10;
    digits++;
   }
   printf("\nNumber of digit: %d\n",digits);


}