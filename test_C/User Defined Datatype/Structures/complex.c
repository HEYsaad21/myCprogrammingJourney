#include<stdio.h>
typedef struct complex{
     int Re;
     int Im;
}C;

int main(){
    C num1={3,5};
    C *ptr=&num1;

    printf("\nThe complex number is : %d+%di\n",ptr->Re,ptr->Im);
}