#include<stdio.h>

int fact(int n){
    
    if(n==0){
        return 1;
    }

    int factNm1=fact(n-1);
    int factN=n*factNm1;
    return factN;

}
int main(){ int n;
    printf("enter n: ");
    scanf("%d",&n);
    
    if(n<0){
        printf("\nINVALID");
    }
     else {
    printf("\nfactorial of n is :%d",fact(n));}
    return 0;

}
