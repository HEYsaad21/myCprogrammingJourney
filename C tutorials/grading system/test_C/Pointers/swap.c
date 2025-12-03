#include<stdio.h>
int main()
{  int a=3,b=5,c;
   printf("before swaping a=%d,b=%d",a,b)  ;

   c=b;  
   b=a;
   a=c;
   
   printf("\nafter swaping a=%d,b=%d",a,b)  ;

      
    return 0;
}