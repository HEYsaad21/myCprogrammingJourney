#include<stdio.h>
int main(){

int array[3];

printf("enter the phy marks : ");
scanf("%d",&array[0]);
printf("\nenter the chem marks : ");
scanf("%d",&array[1]);
printf("\nenter the bio marks : ");
scanf("%d",&array[2]);


printf("\nphy :%d,\nchem :%d,\nbio :%d",array[0],array[1],array[2]);
return 0;

}