#include<stdio.h>

struct student {
    int roll;
    float cg;
    char name[64];
};
int main(){

    struct student s1={20,3.58,"Saad"};
    struct student *ptr; 

    ptr=&s1;   // referencing

    printf("Roll: %d\n",(*ptr).roll);   //dereferencing
    printf("CG: %.2f\n",(*ptr).cg);
    printf("Name: %s\n",(*ptr).name);

    // using arrow operator
    // (*ptr).roll  is equivalent to  ptr->roll
    printf("\nBy using arrow operator:\n");
    printf("Roll: %d\n",ptr->roll);



}