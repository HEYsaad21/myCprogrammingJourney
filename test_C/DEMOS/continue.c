#include<stdio.h>
int main()
{    
   int i,n;
   printf("ENTER THE NUMBER YOU WANT TO SKIP FROM 1 TO 10: ");
   scanf("%d",&n);
   for(i=1;i<=10;i++){

    if(i==n){
        printf("   (%d is skipped)\n",n);
    continue;
     }
    printf("%d\n",i);
   }
      
    return 0;
}