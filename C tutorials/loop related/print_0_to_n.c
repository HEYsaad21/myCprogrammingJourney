#include<stdio.h>
int main()
{    
   printf("ENTER n :");
   int n;
   scanf("%d",&n);
     
/* using for loop */
// for(int i=0;i<=n;i++){
//     printf("%d\n",i);


//}

/* same task using while loop */
int i=0;
while(i<=n){
    printf("%d\n",i);
    i++;
}

  return 0;
}