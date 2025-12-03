#include<stdio.h>
#include<math.h>
int main(){

    float p,t,r,a;
    printf("Enter Principal (amount): ");
    scanf("%f",&p);
    printf("Enter Time: ");
    scanf("%f",&t);
    printf("Enter Rate: ");
    scanf("%f",&r);

  a=p*pow((1+r/100),t);
  printf("Compound interest is: %f",a-p);


}