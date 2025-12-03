#include<stdio.h>
#include<string.h>

int main(){
    float a,b;
    printf("Enter a: ");
    scanf("%f",&a);
    printf("Enter b: ");
    scanf("%f",&b);
    
    char s[16];
    if(b==0){
           strcpy(s,"infinity!");
           printf("%.2f/%.2f= %s\n",a,b,s);

    }
    else{
        printf("%.2f/%.2f= %.2f\n",a,b,a/b);
    }
}