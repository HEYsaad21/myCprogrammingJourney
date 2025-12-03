#include<stdio.h>
 
 float percentage(int bng,int eng,int math){
    return ((bng+eng+math)/3.0);
 }
 int main(){
    float bng,eng,math;
    printf("enter marks in bng: ");
    scanf("%f",&bng);
    printf("\nenter marks in eng: ");
    scanf("%f",&eng);
    printf("\nenter marks in math: ");
    scanf("%f",&math);

    printf("avrg marks percentage: %f",percentage(bng,eng,math));
    return 0;
 }