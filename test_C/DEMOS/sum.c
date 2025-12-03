#include<stdio.h>
int main()
{   /*sum from 1 to n*/ 
   int i,n,sum=0;
   printf("ENTER n: ");
   scanf("%d",&n);

   for(i=1;i<=n;i++){
    printf("%d\n",i);
    sum=sum+i;
   }printf("the sum is :%d",sum);

      
    return 0;
}