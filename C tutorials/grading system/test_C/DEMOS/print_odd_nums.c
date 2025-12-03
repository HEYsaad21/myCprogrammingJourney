#include<stdio.h>
int main()
{    
  int a ;

/*using contiue*/

//   for(a=5;a<=50;a++){
//     if(a%2==0){
//         continue;
//     }
//     printf("%d\n",a);
//   } 
      
  /* using if condition in for() block */ 

   for(a=5;a<=50;a++)
   {
    if(a%2!=0)
        { printf("%d\n",a);};
  } 
   
    return 0;
}