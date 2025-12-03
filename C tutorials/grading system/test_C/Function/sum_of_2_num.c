#include <stdio.h>

int sum(int a,int b);//prototype

int sum(int a,int b){       //declaration
    return a+b;
}

int main() { int x,y;
    
    printf("enter x: ");
    scanf("%d",&x);
    printf("enter y: ");
    scanf("%d",&y);
    int R;
     R = sum(x,y);  //func calling
    printf("the sum of %d and %d is : %d",x,y,R)
    ;
    
    return 0;
}