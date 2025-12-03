#include<stdio.h>

void square(float s){
    printf("area of square is %f\n",s*s);
}
void circle(float r){
    printf("area of square is %f\n",3.141592654*r*r);
}
void rectangular(float a,float b){
    printf("area of rectangular is %f\n",a*b);
}

int main(){
    float s,r,a,b;
    printf("\ndata for square :enter the side: ");
    scanf("%f",&s);
    printf("\ndata for circle :enter the radius: ");
    scanf("%f",&r);
    printf("\ndata for rectangular :");
    printf("\n enter length: ");
    scanf("%f",&a);
    printf("  enter width: ");
    scanf("%f",&b);

    square(s);
    circle(r);
    rectangular(a,b);

    return 0;

}