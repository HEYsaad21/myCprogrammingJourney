#include<stdio.h>

void price(float actual_price);
void price(float actual_price){
    
printf("final value =%f",actual_price+actual_price*0.18);
}
int main()
{    
   float  actual_price,vat;
   printf("enter actual price : ");
   scanf("%f",&actual_price);



price(actual_price);
      
    return 0;
}