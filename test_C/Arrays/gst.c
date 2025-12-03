
#include<stdio.h>
int main()
{    
   float array[3];

   printf("\nenter the price of 1st product :");
   scanf("%f",&array[0]);
   printf("\nenter the price of 2nd product :");
   scanf("%f",&array[1]);
   printf("\nenter the price of 3rd product :");
   scanf("%f",&array[2]);


   printf("\nLIST OF PRICE INCLUDING 18 PERCENT GST");
   printf("\n1st product :%f",1.18*array[0]);
   printf("\n2nd product :%f",1.18*array[1]);
   printf("\n3rd product :%f",1.18*array[2]);
      
    return 0;
}