#include<stdio.h>
int main()
{    
   int a,b,temp;
   printf("\nenter a <space> b :");
   scanf("%d %d",&a,&b);
   temp=b;
   b=a;
   a=temp;

   printf("values after swaping \na=%d , b=%d\n",a,b);

      
    return 0;
}