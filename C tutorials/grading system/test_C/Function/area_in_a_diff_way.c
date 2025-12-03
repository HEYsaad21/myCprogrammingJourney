#include<stdio.h>

float square(float s){
return s*s;
}
float circle(float r){
return 3.141592654*r*r;
}
float rec(float a,float b){
return a*b;
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

    printf("area of square is : %f\n",square(s));
    printf("area of circle is : %f\n",circle(r));
    printf("area of rectangle is : %f\n",rec(a,b));



}


