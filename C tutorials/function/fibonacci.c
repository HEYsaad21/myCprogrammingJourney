#include<stdio.h>

int fibonacci(int n){
   if(n==0||n==1){
   if(n==0){
    return 0;
   } 
else if(n==1){
    return 1;
   }}
   
   int fnm2=fibonacci(n-2);
   int fnm1=fibonacci(n-1);
   int fn=fnm1+fnm2;
   return fn;
}

int main(){ int n;
    printf("enter the value of n for fibonacci series: ");
    scanf("%d",&n);
    printf("\nthe %dth term of fibonacci series to  is: %d",n,fibonacci(n));
    return 0;
}