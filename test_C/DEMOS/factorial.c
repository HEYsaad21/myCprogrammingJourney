#include<stdio.h>
int main()
{    
   int i,n,fact=1;
   printf("ENTER n : ");
   scanf("%d",&n);

   if(n<0){
    printf("INVALID INPUT\n");
   }
   else if(n==0){
    printf("FACTORIAL OF n , n!=1");


   }
   

   else {

      for(i=1;i<=n;i++){
       
        fact=fact*i;
}
printf("FACTORIAL OF n , n!=%d",fact);

   }
      
    return 0;
}