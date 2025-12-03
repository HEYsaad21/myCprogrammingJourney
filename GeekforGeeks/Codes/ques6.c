#include<stdio.h>
int main()

{   int n;
    printf("Enter a number: ") ;
   scanf("%d",&n);
   
   
   if(n<0){
    printf("negative");
   }else if(n==0){
    printf("zero");
   }
   else if(n%2==0){
    printf("even");
   }else if(n%2!=0){
    printf("odd");
   }
      
    return 0;
}