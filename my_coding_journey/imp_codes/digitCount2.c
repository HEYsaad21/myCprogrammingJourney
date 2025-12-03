#include<stdio.h>
#include<math.h>

int main(){
    long int Num;
    printf("Enter a number: ");
    scanf("%ld",&Num);

   int digits=log10(Num)+1;

   
   printf("\nNumber of digit: %d\n",digits);


}