#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    float cg;
    char name[100];
};

int main(){
    struct student CSE[44]; //declaring an array;
    //accessing:

    CSE[0].roll=69;
    CSE[0].cg=3.69;
    strcpy(CSE[0].name,"hehe");
    printf("\ninfo:\nname:%s\nroll:%d\ncg:%.2f\n",CSE[0].name,CSE[0].roll,CSE[0].cg);



}