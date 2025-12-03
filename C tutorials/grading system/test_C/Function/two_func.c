#include<stdio.h>

//prototype(declaration)
void hello();
void good_bye();

//defination
void hello(){
    printf("hello\n");
}
void good_bye(){
    printf("good bye\n");
}

//function call
int main(){
    hello();
    good_bye();

 return 0;   
}