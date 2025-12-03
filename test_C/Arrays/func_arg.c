#include<stdio.h>
void printNumber(int array[] ,int n);

void printNumber(int array[],int n){

    for(int i=0;i<n;i++){
    printf("%d\t",array[i]);}
}

int main(){

    int array[]={1,2,3,4,5,6};
    printNumber(array ,6);
    return 0;
}