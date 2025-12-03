#include<stdio.h>


void swap(int a,int b){
    int c=b;
    b=a;a=c;
    printf("\nafter swaping a=%d,b=%d",a,b);
}
void _swap(int *a,int *b){
    int c=*b;
    *b=*a;*a=c;
    printf("\nafter swaping a=%d,b=%d",*a,*b);
}
int main(){

    int a=5,b=3;
    printf("\n\ncall by value :");    //call by value
    printf("\nbefore swaping a=%d,b=%d",a,b);
    swap(a,b);

    printf("\n\ncall by reference :");   //call by reference
    printf("\nbefore swaping a=%d,b=%d",a,b);
    _swap(&a,&b);


    return 0;
}



