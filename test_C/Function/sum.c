#include<stdio.h>

void sum(); //declaration(prototype)


void sum(){
    int x=10,y=15;
    printf("sum of (x,y)=(10,15) is :%d\n",x+y);  //defination
}


int main(){

    sum();   // function call
    return 0;
}
