#include<stdio.h>
void dowork(int a,int b,int *sum,int *pro,int *avg);
void dowork(int a,int b,int *sum,int *pro,int *avg){
   
    *sum=a+b; // '*' accesses the value of container
    *pro=a*b;
    *avg=(a+b)/2;
}
int main(){
    int a=3,b=5,sum,pro,avg;

    dowork(a,b,&sum,&pro,&avg); //sum,pro,avg ==> pass by reference ; a,b==> pass by value
    printf("\n\nsum is : %d\nproduct is : %d\navg is : %d\n",sum,pro,avg);
    return 0;
}