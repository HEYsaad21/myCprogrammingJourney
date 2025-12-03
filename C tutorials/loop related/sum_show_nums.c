#include<stdio.h>
int main()
{    
   
int sum,n;
printf("ENTER n : ");
scanf("%d",&n);

for(int i=n;i>=1;i--){
    printf("%d\n",i);
    sum=sum+i;
}

printf("THE SUM IS: %d",sum);




   
    return 0;
}