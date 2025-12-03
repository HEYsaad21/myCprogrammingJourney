#include<stdio.h>
int main()
{    
   int age=22;
   float pi=3.14;
   char ch='#';
float *ptr=&pi;
float **pptr=&ptr;

   //pointer to pointer
    
   printf("%p\n",ptr);
   printf("%p\n",pptr);

   
      
    return 0;
}