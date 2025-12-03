#include<stdio.h>
int main()
{   int n;
printf("enter n: ") ;
scanf("%d",&n);
int fib[n];
 fib[0]=0;
 fib[1]=1;
 if(n==0){
    printf("0");
 }else if(n==1) {
    printf("0\t1");
 }
else{ printf("0\t1");
   for(int i=2;i<n;i++){
    fib[i]=fib[i-1]+fib[i-2];
    printf("\t%d",fib[i]);
   }}
      
    return 0;
}