#include<stdio.h>
int main()
{    char c;
     float op1,op2;
printf("Enter an operator (+, -, *, /): ");
scanf("%c",&c);


 
    printf("Enter operand 1:");
 scanf("%f",&op1);
 printf("Enter operand 2:");
 scanf("%f",&op2);



switch (c)
{
case '+':
    printf("%.2f",op1+op2);
    break;
case '-':
  printf("%.2f",op1-op2);
    break;
case '*':
    printf("%.2f",op1*op2);
    break;
case '/':
    printf("%.2f",(op1*1.0)/op2);
    break;

default: printf("Error! Incorrect Operator Value\n");
    break;
}
   
      
    return 0;
}