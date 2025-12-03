#include<stdio.h>
int main()
{    int array[2][3];//2x3 matrix

printf("enter data : kid 1, sub 1:");
scanf("%d",&array[0][0]);
printf("enter data : kid 1, sub 2:");
scanf("%d",&array[0][1]);
printf("enter data : kid 1, sub 3:");
scanf("%d",&array[0][2]);
printf("enter data : kid 2, sub 1:");
scanf("%d",&array[1][0]);
printf("enter data : kid 2, sub 2:");
scanf("%d",&array[1][1]);
printf("enter data : kid 2, sub 3:");
scanf("%d",&array[1][2]);
                printf("\n\n");

 printf(" data : kid 1, sub 1:%d\n",array[0][0]); 
 printf(" data : kid 1, sub 2:%d\n",array[0][1]);
 printf(" data : kid 1, sub 3:%d\n",array[0][2]);
 printf(" data : kid 1, sub 1:%d\n",array[1][0]); 
 printf(" data : kid 2, sub 2:%d\n",array[1][1]);
 printf(" data : kid 2, sub 3:%d\n",array[1][2]);


    return 0;
}