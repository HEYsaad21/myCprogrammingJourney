#include<stdio.h>
int main()
{    
   
int i,n;
printf("enter n: ");
scanf("%d",&n);

printf("TABLE OF  %d \n",n);

for(i=1;i<=10;i++){
    printf("  %dx%d=%d\n",n,i,n*i);
}






   
    return 0;
}