#include<stdio.h>
int main()
{    long long int n,f=1;
printf("Enter a number: ");
scanf("%lld",&n);
if(n<0){
    printf("math error!");
}else if(n==0){
    printf("Factorial: %lld",f);

}else if(n>0){
    for(int i=1;n!=1;i++){
          f=f*n;
          n=n-1;

    }printf("Factorial: %lld\n",f);
}
   
      
    return 0;
}