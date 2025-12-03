#include<stdio.h>
int main()
{    
   

// int n;
// printf("ENTER n :");
// scanf("%d",&n);

// printf("SUM FROM 1 TO n is :%d",n*(n+1)/2);


int i,n,sum;
printf("ENTER n: ");
scanf("%d",&n);

for(i=1;i<=n;i++){
    sum=sum+i;
}
printf("%d\n",sum);

  return 0;
}