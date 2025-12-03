#include<stdio.h>

struct vector sum(struct vector v1,struct vector v2);

 struct vector{
    int A;
    int B;
}  ;

int main(){
   struct  vector v1,v2;
    
    printf("Vector 1:\n");
    printf("Projection upon horizontal axis:");
    scanf("%d",&v1.A);
    printf("Projection upon vetical axis:");
    scanf("%d",&v1.B);
    printf("Vector 2:");
    printf("Projection upon horizontal axis:");
    scanf("%d",&v2.A);
    printf("Projection upon vetical axis:");
    scanf("%d",&v2.B);

   struct vector S=sum(v1,v2);

    printf("\nVector sum: %di+%dj\n",S.A,S.B);

}
struct vector sum( struct vector v1,struct vector v2){
        
    int a= v1.A+v2.A;
    int b=v1.B+v2.B;

    struct vector sum={a,b};

    return sum;
}