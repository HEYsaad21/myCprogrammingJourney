#include<stdio.h>
int main()
{    
   int i,n;
   printf("enter n: ");
   scanf("%d",&n);
   printf("TABLE OF %d IN REVERSE ORDER:\n",n);
   for(i=10;i>=1;i--){
    printf("%dx%d=%d\n",n,i,n*i);
   }
      
    return 0;
}