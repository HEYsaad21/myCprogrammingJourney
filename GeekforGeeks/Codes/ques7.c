#include<stdio.h>
int main()
{    int a,b,c;
printf("enter number1: ");
scanf("%d",&a);
 printf("enter number2: ");
scanf("%d",&b);
 printf("enter number3: ");
scanf("%d",&c);
   
if(a>b&&a>c){
    printf("Largest number is :%d",a);
}else if(b>c&&b>a){
    printf("Largest number is :%d",b);
}else if(c>b&&c>a){
    printf("Largest number is :%d",c);
}



      
    return 0;
}