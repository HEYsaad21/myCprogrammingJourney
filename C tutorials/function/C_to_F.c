#include<stdio.h>
float f(float c){
    return (1.8*c+32);
}
int main(){
    float c;
    printf("enter temp in celcius: ");
    scanf("%f",&c);
    printf("\n temp in Farenheit: %f",f(c));
    return 0;
}