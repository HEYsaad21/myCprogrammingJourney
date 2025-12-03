#include<stdio.h>
int main()
{    
 int n;

 do{
 printf("enter a num :");
 scanf("%d",&n);
 printf("%d\n",n);

 if(n%2!=0){
    break;
 }
  }while(1);
  printf("stopped since odd number");
   
    return 0;
}